#include <stdio.h>
#include <stdlib.h>
double diameter (double x);
double circumference  (double y );
double area (double z );

int main()
{
    double num, dia, cir, a;
    printf("Enter the radius\n");
    scanf("%lf",&num);
    dia=diameter(num);
    cir=circumference(num);
    a=area(num);
    printf("the diameter is: %lf\n the circrumference is: %lf\n the area is: %lf\n",dia,cir,a);
    return 0;
}
double diameter (double x)
{
  return 2*x;
}
double circumference  (double y )
{
    return 2*3.14*y;
}
double area (double z )
{
    return 3.14*z*z;
}
