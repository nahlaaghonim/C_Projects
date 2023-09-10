#include <stdio.h>
#include <stdlib.h>
int fact (int n);
int main()
{
int num;
printf("Enter the number:\n") ;
scanf("%d",&num);
printf("The factorial of %d is :%d\n",num,fact(num)) ;

   return 0;
}
int fact (int n)
{
    if (n==1)

        return 1;

    else
        return n* fact(n-1);

}
