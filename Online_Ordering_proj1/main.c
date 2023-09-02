#include <stdio.h>
#include <stdlib.h>

int main()
{
int choc=0,eggs=0,jam=0,milk=0,flour=0,numofitems;
float price=0,shipp=0;
char item,i;
int n=0; //counter
 printf("Welcome to our supermarket, where you can find everything you need!\n");
 printf("Here is the items\n");
 printf("1:Chocolate\n2:Eggs\n3:Jam\n4:Milk\n5:Flour\n");
 printf("Enter the number of items you want to order (minimum 2): ");
 scanf("%d", &numofitems);
if (numofitems < 2)
    {
        printf("Minimum order requirement not met.\n");

    }
 do
    {
      printf("Press CH if you want Chocolate\n M if you want Milk\n F if you want Flour\n" );
      printf(" E if you want Eggs\n J if you want Jam\n ");
      fflush(stdin);
      scanf("%c",&item);
      switch(item){
       case 'CH' :
           price+=8;
           choc++;
           n=1;
         break;
       case 'M' :
           price+=10;
           milk++;
           n=1;
            break;
       case 'J' :
           price+=11;
           jam++;
           n=1;
            break;
       case 'F':
           price+=8;
           flour++;
           n=1;
            break;
       case'E' :
           price+=6;
           eggs++;
           n=1;
            break;
       default :
        printf("Please,Enter the correct letter\n");
        fflush(stdin);
        break;
      }
      printf("Do you want to continue shopping ?\n write Y for yes and N for No\n");
     fflush(stdin);
    scanf("%c",&i);

      if(i=='Y')
      {

       n=0;
      }

     } while(n==0);

      numofitems=choc+eggs+jam+milk+flour;

        if(price <10){
            price+=2;

        }
        else
            {
            price +=3;
        }


if(choc>0)
    {
            printf("%d Chocolate, the price is = %d$\n",choc,(choc*8));
    }
      if(milk>0)
      {
                      printf("%d Milk, the price is = %d$\n",milk,(milk*10));

      }
      if(jam>0)
      {
            printf("%d jam, the price = %d$\n",jam ,( jam*11));
      }
      if(eggs>0)
      {
            printf("%d eggs, the price = %d$\n",eggs,(eggs*6));
      }
      if(flour>0)
      {
            printf(" %d flour, the price = %d$\n",flour,(flour*8));
      }
if(numofitems>5)
    {
        price =price *0.8 ;
      }
      printf("Total price is %f $", price);

    return 0;
}
