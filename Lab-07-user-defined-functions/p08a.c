/*
    Lab 7
    8.a)  Write a program to find the value of n! using recursion.
*/

#include <stdio.h>
#include <conio.h>

long int fact(int n)
{
    // base case
    if (n < 3)
        return n;

    return n * fact(n - 1);
}

int main()
{
    int n;

    printf("C program to find factorial of an integer\n\n");

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Invalid input.");
    else
        printf("%d! = %ld", n, fact(n));

    getch();
    return 0;
}