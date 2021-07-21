/*
    Practice
    12. Write a program to evaluate the following series upto n terms. Prompt the values of x and n from the user.
        f(x) = x + x^2/2! + x^3/3! + x^4/4! + ...upto n terms
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float x, result = 0;
    int n, fact = 1;

    printf("C program to evaluate the following series:\n"
           "f(x) = x + x^2/2! + x^3/3! + x^4/4! + ...upto n terms\n\n");

    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // for factorial
        for (int j = 1; j <= i; j++)
            fact *= j;

        result += pow(x, i) / fact;

        fact = 1;
    }

    printf("f(%.2f) = %.5f", x, result);

    getch();
    return 0;
}
