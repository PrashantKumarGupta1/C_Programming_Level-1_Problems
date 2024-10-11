// Question: Get a number from user and subtract 5 from that number if the number’s ten’s position digit is odd, then print the result. Do not use “if”.

//****************************************
#include<stdio.h>
int main ()
{
            int x,y;
            printf("Enter Number :");
            scanf("%d",&x);
            int tens,a,b;
            b = x / 10;
            tens = b % 10;
            a = tens % 2;
            y = x - (a * 5);
            printf("%d",y);
}
//****************************************
