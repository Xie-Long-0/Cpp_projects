#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

typedef struct Rectangle_
{
    Shape base;
    double width;
    double height;
} Rectangle;

Rectangle *Rectangle_create(const char *name, double width, double height);

void Rectangle_destroy(Shape *self) OVERRIDE;
double Rectangle_perimeter(Shape *self) OVERRIDE;
double Rectangle_area(Shape *self) OVERRIDE;

double Rectangle_width(Rectangle *self);
double Rectangle_height(Rectangle *self);
void Rectangle_setSize(Rectangle *self, double width, double height);

#endif
