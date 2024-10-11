// Question: Get a two-digit number from user and make the one’s digit as 0, then print it.

//********************************
#include<stdio.h>
int main ()
{
            int x,y;
            printf("Enter Number :");
            scanf("%d",&x);
            int ones,tens;
            ones = 0;
            tens = x / 10;
            y = tens * 10 + ones;
            printf("%d",y);
}
//*****************************************
