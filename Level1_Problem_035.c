/* Question: Get two 3-digit numbers from user. Add the one’s and hundred’s digits of both the
numbers. Print the sum of all the digits of the number whose sum of one’s and
hundred’s digits is bigger. */

//****************************************
#include<stdio.h>
int main ()
{
            int x,y;
            printf("Enter Number1 :");
            scanf("%d",&x);
            printf("Enter Number2 :");
            scanf("%d",&y);
            int ones_x,tens_x,hundreds_x,ones_y,tens_y,hundreds_y,sum_x,sum_y,sum;
            ones_x = x % 10;
            tens_x = (x / 10) % 10;
            hundreds_x = x / 100;
            ones_y = y % 10;
            tens_y = (y / 10) % 10;
            hundreds_y = y / 100;
            sum_x = ones_x + hundreds_x;
            sum_y = ones_y + hundreds_y;
            if(sum_x > sum_y)
                      sum = ones_x + tens_x + hundreds_x;
            else
                      sum = ones_y + tens_y + hundreds_y;
            printf("%d",sum);
}
//****************************************
