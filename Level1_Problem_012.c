// Question: Get a three-digit number from user and print sum the digits.

//********************************
#include<stdio.h>
int main ()
{
            int x,y;
            printf("Enter Number :");
            scanf("%d",&x);
            int ones,tens,hundreds;
            ones = x %10;
            tens = (x / 10) % 10;
            hundreds = x/100;
            y = ones + tens+hundreds;
            printf("Result = %d",y);
}
//*****************************************
