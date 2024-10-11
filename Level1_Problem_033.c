// Question: Get two 2-digit numbers from user. Print the sum of digits of the biggest number.

//****************************************
#include<stdio.h>
int main ()
{
            int x,y;
            printf("Enter Number1 :");
            scanf("%d",&x);
            printf("Enter Number2 :");
            scanf("%d",&y);
            int ones,tens,sum;
            if(x > y)
            {
                  ones = x % 10;
                  tens = x / 10;
                  sum = ones + tens;
                  printf("%d",sum);
            }
            else
            {
                  ones = y % 10;
                  tens = y / 10;
                  sum = ones + tens;
                  printf("%d",sum);
            }
}
//****************************************
