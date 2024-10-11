// Question: Get a two-digit number from user. If the sum of the digits is 10 then print “Success”, otherwise print “Failure”.

//****************************************
#include<stdio.h>
int main ()
{
            int x,y;
            printf("Enter Number :");
            scanf("%d",&x);
            int ones,tens,sum;
            ones = x % 10;
            tens = x / 10;
            sum = ones + tens;
            if(sum == 10)
                  printf("Success");
            else
                  printf("Failure");
}
//****************************************
