// Question: Get a number from user and subtract 5 from that number if the number is odd, then print the result. Do not use “if”.

//********************************
#include<stdio.h>
int main ()
{
            int x,y;
            printf("Enter Number :");
            scanf("%d",&x);
            int a;
            a = x%2;
            y = x - (a * 5);
            printf("%d",y);
}
//*****************************************
