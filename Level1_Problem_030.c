// Question: Get a four-digit number from user. If the sum of the ten’s digit and hundred’s digit is equal to 10, and one of the digits is more than 7 then print “Success”, otherwise print “Failure”.

//****************************************
#include<stdio.h>
int main ()
{
            int x,y;
            printf("Enter Number :");
            scanf("%d",&x);
            int first_two_digits, last_two_digits,tens,hundreds,sum;
            first_two_digits = x % 100;
            last_two_digits = x / 100;
            tens = first_two_digits / 10;
            hundreds = last_two_digits % 10;
            sum = tens + hundreds;
            if(sum == 10)
            {
                       if((tens > 7) || (hundreds > 7))
                             printf("Success");
                       else
                             printf("Failure");
           }
           else
                    printf("Failure");
}
//****************************************
