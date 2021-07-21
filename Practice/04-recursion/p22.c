/*
    Practice
    22. Write a program to find the factorial of an integer using recursion
*/

#include <stdio.h>
#include <conio.h>

int fact(long int n)
{
    // base case
    if (n < 3)
        return n;

    return n * fact(n - 1);
}

int main()
{
    int n;

    printf("C program to find factorial of an integer\n");

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Invalid input.");
    else
        printf("%d! = %ld", n, fact(n));

    getch();
    return 0;
}
