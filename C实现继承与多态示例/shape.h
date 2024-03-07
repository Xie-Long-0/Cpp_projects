#ifndef SHAPE_H
#define SHAPE_H

#include <math.h>

#ifndef M_PI
#define M_PI	3.14159265358979323846
#endif

// 仅用于标记
#define VIRTUAL
#define OVERRIDE
#define PRIVATE

struct Shape_;
typedef struct Shape_ Shape;

enum ShapeType_
{
    T_Invalid = 0,
    T_Rectangle,
    T_Circle,
    T_Square,
    T_Triangle,
    T_Point,

    CustomType = 1024
};

typedef enum ShapeType_ ShapeType;

// 虚函数表，必须在初始化时指向实际的函数
struct ShapeVtbl
{
    void    (*destroy)  (Shape *self);
    double  (*perimeter)(Shape *self);
    double  (*area)     (Shape *self);
};

/**
 * +--- Derived_Shape Struct ---+
 * |----- Base_Shape Struct ----|
 * |  [vptr]                    |
 * |  [base_member]             |
 * |----------------------------|
 * |  [derived_member]          |
 * +----------------------------+
*/

// 作为继承使用时须为第一个结构体成员变量
struct Shape_
{
    struct ShapeVtbl vptr;
    char *name;
    ShapeType type;
};

PRIVATE void Shape_init(Shape *self, ShapeType type, const char *name);
VIRTUAL void Shape_destroy(Shape *self);

ShapeType Shape_type(Shape *self);
const char *Shape_name(Shape *self);
// 设置字符串时将会深拷贝一份做为副本
void Shape_setName(Shape *self, const char *name);

VIRTUAL double Shape_perimeter(Shape *self);
VIRTUAL double Shape_area(Shape *self);

#endif
