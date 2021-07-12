/*
    Lab 7
    10.  Write a program to compute the series:
         sin(x) = x - x^3/ 3! + x^5/ 5! - ...upto n terms
         Write separate recursive functions to calculate x^n and n!
*/

#include <stdio.h>
#include <conio.h>

float power(float base, int exp)
{
    // base case
    if (exp == 0)
        return 1;

    return base * power(base, exp - 1); // x ^ n = x * (x ^ (n-1))
}

long int fact(int num)
{
    // base case
    if (num == 0)
        return 1;

    return num * fact(num - 1);
}

int main()
{
    int n;
    float x, result = 0;

    printf("C program to find the value of\n"
           "sin(x) = x - x^3/ 3! + x^5/ 5! - ...upto n terms\n"
           "where x is in radians\n\n");

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of x: ");
    scanf("%f", &x);

    for (int i = 1; i <= n; i++)
        result += power(-1, i + 1) * power(x, 2 * i - 1) / fact(2 * i - 1);

    printf("\nsin(%.2f) = %.2f", x, result);

    getch();
    return 0;
}
