// Question: Get a three-digit number from user and print the ten’s digit.

//********************************
#include<stdio.h>
int main ()
{
            int x,y;
            printf("Enter Number :");
            scanf("%d",&x);
            int a;
            a = x / 10;
            y = a % 10;
            printf("%d",y);
}
//*****************************************
