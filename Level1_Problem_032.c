// Question: Get two 2-digit numbers from user. If the sum of the numbers is less than 100, then print the sum, otherwise print the difference.

//****************************************
#include<stdio.h>
int main ()
{
            int x,y;
            printf("Enter Number1 :");
            scanf("%d",&x);
            printf("Enter Number2 :");
            scanf("%d",&y);
            int sum,difference;
            sum = x + y;
            if(sum < 100)
                   printf("%d",sum);
            else
            {
                   if(x > y)
                          difference = x - y;
                   else
                          difference = y - x;
                   printf("%d",difference);
             }
}
//****************************************
