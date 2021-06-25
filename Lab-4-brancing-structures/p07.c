/*
    Lab 4
    7.  Write a program to evaluate the following function f(x) given by
        f(x) = 0 if x less than or equal to 0
             = x(x - 10)(x - 15) if x is greater than 0, less than or equal to 10
             = (x - 10)(x - 15)(x - 20) if x is greater than 10, less than or equal to 15
             = (x - 15)(x - 20)(x - 30) if x is greater than 15, less than or equal to 20
             = (x - 20)(x - 30)(x - 40) if x is greater than 20, less than or equal to 30
             = 0 for all other cases
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    float x, result;

    printf("C program to evaluate a function f(x) given by\n"
           "f(x) = 0 if x less than or equal to 0\n"
           "     = x(x - 10)(x - 15) if x is greater than 0, less than or equal to 10\n"
           "     = (x - 10)(x - 15)(x - 20) if x is greater than 10, less than or equal to 15\n"
           "     = (x - 15)(x - 20)(x - 30) if x is greater than 15, less than or equal to 20\n"
           "     = (x - 20)(x - 30)(x - 40) if x is greater than 20, less than or equal to 30\n"
           "     = 0 for all other case\n\n");

    printf("Enter the value of x: ");
    scanf("%f", &x);

    if (x <= 0)
        result = 0;
    else if (x > 0 && x <= 10)
        result = x * (x - 10) * (x - 15);
    else if (x > 10 && x <= 15)
        result = (x - 10) * (x - 15) * (x - 20);
    else if (x > 15 && x <= 20)
        result = (x - 15) * (x - 20) * (x - 30);
    else if (x > 20 && x <= 30)
        result = (x - 20) * (x - 30) * (x - 40);
    else
        result = 0;

    printf("f(%.2f) = %.2f", x, result);

    getch();
    return 0;
}
