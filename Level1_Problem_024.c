// Question: Get a three-digit number from user and subtract 5 from that number if one’s digit number and 100’s digit number are same, then print the result. Do not use “if”.

//****************************************
#include<stdio.h>
int main ()
{
            int x,y;
            printf("Enter Number :");
            scanf("%d",&x);
            int ones,tens,hundreds,a;
            ones = x % 10;
            hundreds = x/100;
            a = (ones == hundreds);
            y = x - (5 * a);
            printf("%d",y);
}
//****************************************
