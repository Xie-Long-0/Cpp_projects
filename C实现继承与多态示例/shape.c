#include "shape.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void Shape_init(Shape *self, ShapeType type, const char *name)
{
    if (self)
    {
        self->type = type;
        Shape_setName(self, name);
        printf("Init %s\r\n", name);
    }
}

void Shape_destroy(Shape *self)
{
    if (self)
    {
        printf("Destroy %s\r\n", self->name);
        self->vptr.destroy(self);
    }
}

ShapeType Shape_type(Shape *self)
{
    if (self)
        return self->type;
    return T_Invalid;
}

const char *Shape_name(Shape *self)
{
    if (self == NULL)
        return NULL;
    return self->name;
}

void Shape_setName(Shape *self, const char *name)
{
    if (self && name)
    {
        int len = strnlen(name, 127);
        if (len <= 0)
            return;
        // 拷贝字符串
        char *new_name = (char *)malloc(sizeof(char) * (len + 1));
        strncpy(new_name, name, len + 1);
        // 释放旧字符串
        if (self->name)
            free(self->name);
        self->name = new_name;
    }
}

double Shape_perimeter(Shape *self)
{
    if (self == NULL)
        return -1;
    return self->vptr.perimeter(self);
}

double Shape_area(Shape *self)
{
    if (self == NULL)
        return -1;
    return self->vptr.area(self);
}
