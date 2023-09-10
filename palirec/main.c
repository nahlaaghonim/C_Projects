#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int reverse(int num);
int palindrome(int num);
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if (palindrome(num)==1)
    {
    printf("Number is palindrome\n");

    }
    else
    {
         printf("Number is not palindrome\n");

    }
    return 0;
}
int palindrome(int num)
{
 if(num == reverse(num))
    {
        return 1;
    }

    return 0;

}
int reverse(int num)
{
    int digit = (int)log10(num);
    if(num == 0)
        return 0;

    return ((num%10 * pow(10, digit)) + reverse(num/10));
}
