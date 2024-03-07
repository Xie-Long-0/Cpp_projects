#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

typedef struct Circle_
{
    Shape base;
    double radius;
} Circle;

Circle *Circle_create(const char *name, double radius);

void Circle_destroy(Shape *self) OVERRIDE;
double Circle_perimeter(Shape *self) OVERRIDE;
double Circle_area(Shape *self) OVERRIDE;

double Circle_radius(Circle *self);
void Circle_setRadius(Circle *self, double radius);

#endif
