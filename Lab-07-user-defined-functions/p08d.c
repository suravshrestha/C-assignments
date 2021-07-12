/*
    Lab 7
    8.d)  Write a program to find the sum of integers from 1 to n using recursion.
*/

#include <stdio.h>
#include <conio.h>

int sum(int n)
{
    // base case
    if (n == 1)
        return 1;

    return n + sum(n - 1);
}

int main()
{
    int n;

    printf("C program to find the sum of integers from 1 to n, where n is a positive integer\n\n");

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1)
        printf("Invalid input.");
    else
        printf("Sum = %d", sum(n));

    getch();
    return 0;
}
