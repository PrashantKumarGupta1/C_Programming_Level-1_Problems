// Question: Get a four-digit number from user and only reverse the last two digits of the number, then print the number.

//********************************
#include<stdio.h>
int main ()
{
            int x,y;
            printf("Enter Number :");
            scanf("%d",&x);
            int hundreds, thousands ,last_two_digits,first_two_digits,rev_last_two_digits;
            first_two_digits  = x % 100;
            last_two_digits = x/100;
            hundreds = last_two_digits  %10;
            thousands = last_two_digits  / 10;
            rev_last_two_digits = (hundreds * 10) + thousands;
            y = (rev_last_two_digits * 100) + first_two_digits;
            printf("%d",y);
}
//*****************************************
