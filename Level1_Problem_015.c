// Question: Get a four-digit number from user and only reverse the first two digits of the number, then print the number.

//********************************
#include<stdio.h>
int main ()
{
            int x,y;
            printf("Enter Number :");
            scanf("%d",&x);
            int ones,tens,last_two_digits,first_two_digits,rev_first_two_digits;
            first_two_digits  = x % 100;
            last_two_digits = x/100;
            ones = first_two_digits  %10;
            tens =  first_two_digits  / 10;
            rev_first_two_digits = (ones * 10) + tens;
            y = (last_two_digits * 100) + rev_first_two_digits;
            printf("%d",y);
}
//*****************************************
