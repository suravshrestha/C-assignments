/*
    Lab 6
    7.  Write a program to evaluate the following series until the term becomes less than 10^-6:
        1 + x/1! + x^2/2! + x^3/3! + x^4/4! +...
*/

#include <stdio.h>
#include <conio.h>
#include <math.h> // for pow()

#define TERM_LIMIT 0.000001 // 10^-6

int main()
{
    int j = 0, fact = 1;
    float x, term, result = 0;

    printf("C program to evaluate the e^x until the term becomes less than 10^-6:\n"
           "1 + x/1! + x^2/2! + x^3/3! + x^4/4! +...\n\n");

    printf("Enter the value of x: ");
    scanf("%f", &x);

    while (1)
    {
        for (int i = 1; i <= j; i++)
            fact *= i;

        term = pow(x, j) / fact;

        if (term < TERM_LIMIT)
            break;

        result += term;

        fact = 1;
        j++;
    }

    printf("\nResult = %f", result);

    getch();
    return 0;
}
