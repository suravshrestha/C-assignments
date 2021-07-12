/*
    Lab 7
    8.b)  Write a program to find the value of x^n using recursion.
*/

#include <stdio.h>
#include <conio.h>

float power(float x, unsigned int n)
{
    // base case
    if (n == 0)
        return 1;

    return x * power(x, n - 1); // x^n = x * (x^(n - 1))
}

int main()
{
    float x;
    unsigned int n;

    printf("C program to find x^n using recursion, where n is a positive integer\n\n");

    printf("Enter the value of x and n: ");
    scanf("%f %u", &x, &n);

    printf("%.2f ^ %u = %.2f", x, n, power(x, n));

    getch();
    return 0;
}
