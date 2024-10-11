// Question: Get a three-digit number from user and print the reverse of the number.

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
            y = (ones * 100) + (tens * 10) + hundreds;
            printf("Result = %d",y);
}
//*****************************************
