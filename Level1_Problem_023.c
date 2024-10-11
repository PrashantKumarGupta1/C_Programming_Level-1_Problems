// Question: Get a two digit number from user and subtract 5 from that number if the sum of the digits of the number is odd, then print the result. Do not use “if”.

//****************************************
#include<stdio.h>
int main ()
{
            int x,y;
            printf("Enter Number :");
            scanf("%d",&x);
            int ones,tens,sum,a,b;
            tens = x/10;
            ones = x%10;
            sum = tens + ones;
            a = sum % 10;
            b = a % 2;
            y =  x - (b * 5);
            printf("%d",y);
}
//****************************************
