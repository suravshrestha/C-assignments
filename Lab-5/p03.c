/*
    Lab 5
    3.  Write a program to read a positive integer n and display the product of integers from 1 to n if n is even, else the sum.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int n, product = 1, sum = 0;

    printf("C program to find the product of first n natural numbers if n is even, else the sum.\n");

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
        product *= i;
    }

    if (n % 2 == 0)
        printf("The product of first %d natural numbers = %d", n, product);
    else
        printf("The sum of first %d natural numbers = %d", n, sum);

    getch();
    return 0;
}
