/*
    Practice
    11. Write a program to evaluate the cosine series upto n terms. Prompt the values of x and n from the user.
        cos(x) = 1 - x^2/2! + x^4/4! - x^6/6! + ...upto n terms
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float x, result = 0;
    int n, sign = 1, fact = 1;

    printf("C program to evaluate the cosine series:\n"
           "cos(x) = 1 - x^2/2! + x^4/4! - x^6/6! + ...upto n terms\n\n");

    printf("Enter the value of x in radian: ");
    scanf("%f", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        // for factorial
        for (int j = 1; j <= 2 * i; j++)
            fact *= j;

        result += sign * pow(x, 2 * i) / fact;

        sign *= -1;
        fact = 1;
    }

    printf("cos(%.2f) = %.5f", x, result);

    getch();
    return 0;
}
