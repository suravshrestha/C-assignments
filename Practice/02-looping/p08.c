/*
    Practice
    8.  Write a program to read an integer and display the integers from 1 to n using for loop
*/

#include <stdio.h>
#include <conio.h>

void main(void)
{
    int n, sum = 0;

    printf("C program to print the sum of integers from 1 to n\n");

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        sum += i;

    printf("Sum = %d", sum);

    getch();
}
