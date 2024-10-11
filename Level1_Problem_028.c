// Question: Get a three-digit number from user. If the sum of the one’s digit and hundred’s digit is less than 10, then print “Success”, otherwise print “Failure”.

//****************************************
#include<stdio.h>
int main ()
{
            int x,y;
            printf("Enter Number :");
            scanf("%d",&x);
            int ones,tens,hundreds,sum;
            ones = x  % 10;
            tens = (x / 10) % 10;
            hundreds = x / 100;
            sum = ones +  hundreds;
            if(sum < 10)
                 printf("Success");
            else
                 printf("Failure");
}
//****************************************
