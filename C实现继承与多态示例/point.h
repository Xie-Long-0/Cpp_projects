#ifndef POINT_H
#define POINT_H

#include "shape.h"

typedef struct Point_
{
    Shape base;
    double px;
    double py;
} Point;

Point *Point_create(const char *name, double px, double py);

void Point_destroy(Shape *self) OVERRIDE;
double Point_perimeter(Shape *self) OVERRIDE;
double Point_area(Shape *self) OVERRIDE;

double Point_x(Point *self);
double Point_y(Point *self);
void Point_setXY(Point *self, double px, double py);

#endif
