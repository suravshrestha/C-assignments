/*
    Lab 5
    5.  Write a program to calculate x^n/ n! where x is a floating point number and n is integer greater than or equal to 0.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float x, n, result;
    int fact = 1;

    printf("C program to calculate x^n/ n!\n");

    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("Enter a positive integer for n: ");
    scanf("%f", &n);

    if (n < 0 || (n - (int)n) != 0)
        printf("Invalid input, factorial of negative and floating numbers doesn't exist.");
    else
    {
        for (int i = 1; i <= n; i++)
            fact *= i;

        result = pow(x, n) / fact;

        printf("%.2f^%.0f/ %.0f! = %.2f", x, n, n, result);
    }

    getch();
    return 0;
}
