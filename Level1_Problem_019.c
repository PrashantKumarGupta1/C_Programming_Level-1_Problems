// Question: Get a three-digit number from user and make the one’s digit as 2,then print it.

//********************************
#include<stdio.h>
int main ()
{
            int x,y;
            printf("Enter Number :");
            scanf("%d",&x);
            int ones,last_two_digits;
            ones = 2;
            last_two_digits = x/10;
            y = (last_two_digits * 10) +ones;
            printf("%d",y);
}
//*****************************************
