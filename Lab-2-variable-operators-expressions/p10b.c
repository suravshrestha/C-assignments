/*
    Lab 2
    10.b)   Write a program to evaluate the following expressions:
            (a + b) ^ ((2x + y)/(p-q)) + c - 100
*/

#include <stdio.h>
#include <conio.h> //  for getch()
#include <math.h>  //  for pow()

void main(void)
{
    float a, b, c, x, y, p, q, result;

    printf("C program to evaluate the following expression:\n");
    printf("(a + b) ^ ((2x + y)/(p-q)) + c - 100\n");

    printf("Enter the values of a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("Enter the values of x and y: ");
    scanf("%f %f", &x, &y);

    printf("Enter the values of p and q: ");
    scanf("%f %f", &p, &q);

    if (p == q)
    {
        printf("Error! Division by zero!!");
        return;
    }

    float base = a + b;
    float exponent = (2 * x + y) / (p - q);

    result = pow(base, exponent) + c - 100;

    printf("Result = %.2f", result);

    getch();
}
