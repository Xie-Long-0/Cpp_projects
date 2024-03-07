#include "point.h"
#include <stdlib.h>

Point *Point_create(const char *name, double px, double py)
{
    Point *self = (Point *)malloc(sizeof(struct Point_));
    Shape_init((Shape *)self, T_Point, name);
    self->base.vptr.destroy = Point_destroy;
    self->base.vptr.perimeter = Point_perimeter;
    self->base.vptr.area = Point_area;
    self->px = px;
    self->py = py;
    return self;
}

void Point_destroy(Shape *self)
{
    if (self)
    {
        if (self->name)
            free(self->name);
        Point *p = (Point *)self;
        free(p);
        self = NULL;
    }
}

double Point_perimeter(Shape *self)
{
    if (self == NULL)
        return -1;
    return 0;
}

double Point_area(Shape *self)
{
    if (self == NULL)
        return -1;
    return 0;
}

double Point_x(Point *self)
{
    if (self == NULL)
        return -1;
    return self->px;
}

double Point_y(Point *self)
{
    if (self == NULL)
        return -1;
    return self->py;
}

void Point_setXY(Point *self, double px, double py)
{
    if (self == NULL)
        return;
    self->px = px;
    self->py = py;
}
