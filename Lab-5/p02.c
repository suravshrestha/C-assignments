/*
    Lab 5
    2.  Write a program to read a positive integer n and display the sum of even integers from 1 to n.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int n, sum = 0;

    printf("C program to find the sum of even integers from 1 to n\n");

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0)
        printf("Invalid input.");
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
                sum += i;
        }

        printf("Sum of first %d even integers = %d", n, sum);
    }

    getch();
    return 0;
}
