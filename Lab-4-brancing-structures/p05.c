/*
    Lab 4
    5.  Write a program to read an unsigned integer and check whether the number is odd or even .
        If it is even, check whether it is greater than 100 or not and display the appropriate message,
        if it is odd, check whether it is divisible by 11 and not by 7 and display the appropriate message.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    unsigned int a;

    printf("Enter a positive integer: ");
    scanf("%u", &a);

    if (a % 2 == 0)
    {
        if (a > 100)
            printf("%u is even integer and greater than 100.", a);
        else
            printf("%u is even integer and less than 100.", a);
    }
    else
    {
        if (a % 11 == 0)
        {
            if (a % 7 == 0)
                printf("%u is odd integer and divisible by both 7 and 11.", a);
            else
                printf("%u is odd integer and divisible by 11 but not by 7.", a);
        }
        else
        {
            if (a % 7 == 0)
                printf("%u is odd integer and divisible by 7 but not by 11.", a);
            else
                printf("%u is odd integer and divisible by neither 7 nor 11.", a);
        }
    }

    getch();
    return 0;
}