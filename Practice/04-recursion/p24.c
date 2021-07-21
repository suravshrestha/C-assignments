/*
    Practice
    24. Write a program to read a positive integer n and find the sum of integers from 1 to n.
*/

#include <stdio.h>
#include <conio.h>

unsigned int sum(unsigned int n)
{
    // base case
    if (n == 1)
        return 1;

    return n + sum(n - 1);
}

int main()
{
    unsigned int n;

    printf("C program to find the sum of integers from 1 to n, where n is a positive integer\n");

    printf("Enter the value of n: ");
    scanf("%u", &n);

    if (n == 0)
        printf("Invalid input.");
    else
        printf("Sum = %u", sum(n));

    getch();
    return 0;
}
