/*
    Lab 6
    6.b) Write a program to evaluate the e^-1:
         1 - 1/1! + 1/2! - 1/3! +... upto n terms
*/

#include <stdio.h>
#include <conio.h>

int main()

{
    int n, fact = 1;

    float sign = 1.0, term, result = 0;

    printf("C program to evaluate the value of e^-1:\n"
           "1 - 1/1! + 1/2! - 1/3! +... upto n terms\n\n");

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
            fact *= j;

        term = sign / fact;
        result += term;

        fact = 1;
        sign *= -1.0;
    }

    printf("\nValue of expansion of e^-1 upto %d terms = %f", n, result);

    getch();
    return 0;
}
