#include <stdio.h>
#include <stdlib.h>
int max (int n1,int n2);
int min (int n1,int n2);

int main()
{
    int num1, num2,maximum, minimum;
    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("Enter the second number\n");
    scanf("%d",&num2);
maximum=max(num1,num2);
minimum=min(num1,num2);
printf("The maximum is %d\n",maximum);
printf("The minimum is %d",minimum);

    return 0;
}
max (int n1,int n2)
{
    return (n1 > n2 ) ? n1 : n2;

}
min (int n1,int n2)
{
    return (n1 > n2 ) ? n2 : n1;

}
