#include <stdio.h>
#include <stdlib.h>
double cube (double);
int main()
{
   double num, result;
    printf("Enter the number you want to calculate the cube of");
    scanf("%lf",&num);
    result = cube(num);
    printf("Cube of %lf is %lf\n", num, result);


    return 0;
}
double cube (double x)
{
     return x*x*x;
}
