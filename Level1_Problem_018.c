// Question: Get a two-digit number from user and make the ten’s digit 1,then print it.

//********************************
#include<stdio.h>
int main ()
{
            int x,y;
            printf("Enter Number :");
            scanf("%d",&x);
            int ones,tens;
            ones = x %10;
            tens = 1;
            y = (tens * 10) +ones;
            printf("%d",y);
}
//*****************************************
