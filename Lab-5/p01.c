/*
    Lab 5
    1.  Write a program to read a positive integer and print the integers from 1 to n and in reverse order
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    unsigned int n;

    printf("C program to print the first n natural numbers, and in reverse order\n");

    printf("Enter a positive integer: ");
    scanf("%u", &n);

    if (n == 0)
        printf("Invalid input.");
    else
    {
        printf("First %u natural numbers:\n", n);
        for (int i = 1; i <= n; i++)
            printf("%d ", i);

        printf("\nReverse order: \n");
        for (int i = n; i >= 1; i--)
            printf("%d ", i);
    }

    getch();
    return 0;
}
