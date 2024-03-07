#include "circle.h"
#include <stdlib.h>

Circle *Circle_create(const char *name, double radius)
{
    Circle *self = (Circle *)malloc(sizeof(struct Circle_));
    Shape_init((Shape *)self, T_Circle, name);
    self->base.vptr.destroy = Circle_destroy;
    self->base.vptr.perimeter = Circle_perimeter;
    self->base.vptr.area = Circle_area;
    self->radius = radius;
    return self;
}

void Circle_destroy(Shape *self)
{
    if (self)
    {
        if (self->name)
        {
            free(self->name);
        }
        Circle *c = (Circle *)self;
        free(c);
        self = NULL;
    }
}

double Circle_perimeter(Shape *self)
{
    if (self == NULL)
        return -1;
    Circle *c = (Circle *)self;
    return 2 * M_PI * c->radius;
}

double Circle_area(Shape *self)
{
    if (self == NULL)
        return -1;
    Circle *c = (Circle *)self;
    return M_PI * c->radius * c->radius;
}

double Circle_radius(Circle *self)
{
    if (self == NULL)
        return -1;
    return self->radius;
}

void Circle_setRadius(Circle *self, double radius)
{
    if (self == NULL)
        return;
    self->radius = radius;
}
