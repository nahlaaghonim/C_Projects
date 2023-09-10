#include <stdio.h>
#include <stdlib.h>
int sumofdigits(int num);

int main()
{
   int num;
   printf("Enter any number: ");
    scanf("%d", &num);
        printf("Sum of digits of %d = %d", num,sumofdigits(num));

    return 0;
}
int sumofdigits(int num)
{
    if(num == 0)
    return 0;
    else
    return ((num % 10) + sumofdigits(num / 10));
}
