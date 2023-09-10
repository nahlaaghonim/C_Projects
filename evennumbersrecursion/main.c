/*#include <stdio.h>

// The recursive function to print all even numbers in a range
void printEven(int start, int end);

int main()
{
    int low,up;
    printf("Enter the lower limit (even):\n");
    scanf("%d", &low);
printf("Enter the upper limit:\n");
    scanf("%d", &up);
    printf("The even numbers between %d and %d are: ",low,up);
   printEven(low, up);


    return 0;
}
void printEven(int start, int end)
{
    if(start > end)
        return ;

    printf("%d ", start);
        printEven(start + 2, end);
}
*/
#include <stdio.h>

void printEven(int start, int end);

int main()
{
int end;
    printf("Enter the end: ");
    scanf("%d", &end);
    printf("The even numbers between 1 and %d are: \n", end);
    printEven(1, end);

return 0;
}
void printEven(int start, int end)
{
    if (start > end)
return;
    if (start % 2 == 0)
    printf("%d ", start);
    printEven(start + 1, end);
}
