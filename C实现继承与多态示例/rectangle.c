#include "rectangle.h"
#include <stdlib.h>

Rectangle *Rectangle_create(const char *name, double width, double height)
{
    Rectangle *self = (Rectangle *)malloc(sizeof(struct Rectangle_));
    Shape_init((Shape *)self, T_Rectangle, name);
    self->base.vptr.destroy = Rectangle_destroy;
    self->base.vptr.perimeter = Rectangle_perimeter;
    self->base.vptr.area = Rectangle_area;
    self->width = width;
    self->height = height;
    return self;
}

void Rectangle_destroy(Shape *self)
{
    if (self)
    {
        if (self->name)
        {
            free(self->name);
        }
        Rectangle *c = (Rectangle *)self;
        free(c);
        self = NULL;
    }
}

double Rectangle_perimeter(Shape *self)
{
    if (self == NULL)
        return -1;
    Rectangle *r = (Rectangle *)self;
    return (r->width + r->height) * 2;
}

double Rectangle_area(Shape *self)
{
    if (self == NULL)
        return -1;
    Rectangle *r = (Rectangle *)self;
    return r->width * r->height;
}

double Rectangle_width(Rectangle *self)
{
    if (self == NULL)
        return -1;
    return self->width;
}

double Rectangle_height(Rectangle *self)
{
    if (self == NULL)
        return -1;
    return self->height;
}

void Rectangle_setSize(Rectangle *self, double width, double height)
{
    if (self == NULL)
        return;
    self->width = width;
    self->height = height;
}
