// Question: Get a two-digit number from user and print sum the digits.

//********************************
#include<stdio.h>
int main ()
{
            int x,y;
            printf("Enter Number :");
            scanf("%d",&x);
            int ones,tens;
            ones = x %10;
            tens = x / 10;
            y = ones + tens;
            printf("Result = %d",y);
}
//*****************************************
