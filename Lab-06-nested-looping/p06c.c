/*
    Lab 6
    6.c) Write a program to evaluate the following series:
         1 - x^2/2! + x^4/4! - x^6/6! +... upto n terms
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()

{
    int n, fact = 1;
    float sign = 1.0, x, sum = 0;

    printf("C program to evaluate the value of the following series:\n"
           "1 - x^2/2! + x^4/4! - x^6/6! +... upto n terms\n\n");

    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= 2 * i; j++)
            fact *= j;

        sum += sign * pow(x, 2 * i) / fact;

        fact = 1;
        sign *= -1.0;
    }

    printf("\nResult = %f", sum);

    getch();
    return 0;
}
