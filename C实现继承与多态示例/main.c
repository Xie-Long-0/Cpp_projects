#include <stdio.h>

#include "rectangle.h"
#include "circle.h"
#include "point.h"

int main()
{
    Shape *r = (Shape *)Rectangle_create("\033[32mRect 1\033[0m", 30, 20);
    Shape *c = (Shape *)Circle_create("\033[33mCircle 2\033[0m", 15);
    Shape *p = (Shape *)Point_create("\033[34mPoint 3\033[0m", 10, 25);

    double ra = Shape_area(r);
    double ca = Shape_area(c);
    double pa = Shape_area(p);

    double rm = Shape_perimeter(r);
    double cm = Shape_perimeter(c);
    double pm = Shape_perimeter(p);

    const char *rn = Shape_name(r);
    const char *cn = Shape_name(c);
    const char *pn = Shape_name(p);

    printf("Create %s, the shape area is %lg, perimeter is %lg.\r\n", rn, ra, rm);
    printf("Create %s, the shape area is %lg, perimeter is %lg.\r\n", cn, ca, cm);
    printf("Create %s, the shape area is %lg, perimeter is %lg.\r\n", pn, pa, pm);

    printf("The size of %s is %lg x %lg.\r\n", rn, Rectangle_width((Rectangle *)r), Rectangle_height((Rectangle *)r));
    printf("The radius of %s is %lg.\r\n", cn, Circle_radius((Circle *)c));
    printf("The pos of %s is (%lg, %lg).\r\n", pn, Point_x((Point *)p), Point_y((Point *)p));

    Shape_destroy(r);
    Shape_destroy(c);
    Shape_destroy(p);

    return 0;
}
