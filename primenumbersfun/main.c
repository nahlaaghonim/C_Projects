#include <stdio.h>
#include <stdlib.h>
int prime(int num);
void print (int up,int low);
int main()
{
   int low,up;
    printf("Enter the lower number\n");
    scanf("%d",&low);
        printf("Enter the upper number\n");
    scanf("%d",&up);

 print (up,low);
    return 0;
}
void print (int up,int low)
{
    printf("Prime numbers between %d and %d is:\n",low,up);
     while(low<=up)
    {
        if( prime(low))
        {
            printf("%d, ", low);
        }

        low++;
    }
}

int prime(int num)
{
     int i;
    for(i=2; i<=num/2; i++)
    {
        if(num % i == 0)
    {
            return 0;
        }
    }

    return 1;
}
