/*
    Lab 7
    9.  Write a program to compute the following series:
        1^2 - 2^2 + 3^2 - ...upto n terms
        Use recursion to find the exponents.
*/

#include <stdio.h>
#include <conio.h>

int power(int base, int exp)
{
    // base case
    if (exp == 0)
        return 1;

    return base * power(base, exp - 1); // x^n = x * (x^(n-1))
}

int main()
{
    int n, result = 0;

    printf("C program to find compute the following series:\n"
           "1^2 - 2^2 + 3^2 - ...upto n terms\n\n");

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Invalid input.");
    else
    {
        for (int i = 1; i <= n; i++)
            result += power(-1, i + 1) * power(i, 2);

        printf("\nResult = %d", result);
    }

    getch();
    return 0;
}
