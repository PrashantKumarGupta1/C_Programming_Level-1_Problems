// Question: Get a three-digit number from user and make the ten’s digit as 0,then print it.

//********************************
#include<stdio.h>
int main ()
{
            int x,y;
            printf("Enter Number :");
            scanf("%d",&x);
            int ones,tens,hundreds;
            ones = x %10;
            tens =0;
            hundreds = x/100;
            y = (hundreds * 100) + (tens * 10) + ones;
            printf("%d",y);
}
//*****************************************
