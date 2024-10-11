// Question: Get a two-digit number from user and print the reverse of the number.

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
            y = (ones * 10) + tens;
            printf("Result = %d",y);
}
//*****************************************
