/*  求三角形面积--海伦公式  */
#include <stdio.h>
#include <math.h>

double len(double X1, double Y1, double X2, double Y2)
{
	return sqrt(pow((X1-X2),2)+pow((Y1-Y2),2));
}
int main()
{
	double x1,y1,x2,y2,x3,y3,p,a,b,c;
	scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
	a = len(x1,y1,x2,y2);
	b = len(x2,y2,x3,y3);
	c = len(x1,y1,x3,y3);
	p = (a+b+c)/2;
	printf("%.2f",sqrt(p*(p-a)*(p-b)*(p-c)));
	return 0;
}
