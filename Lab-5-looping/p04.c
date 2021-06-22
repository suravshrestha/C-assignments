/*
    Lab 5
    4.  Write a program to enter an integer and print the factorlal. Display appropriate message if factorial is not possible.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    float num;
    int fact = 1;

    printf("C program to calculate the factorial of a number\n");

    printf("Enter a positive integer: ");
    scanf("%f", &num);

    if (num < 0 || (num - (int)num != 0)) // negative and float checks
        printf("Invalid input.");
    else
    {
        for (int i = 1; i <= num; i++)
            fact *= i;

        printf("%.0f! = %d", num, fact);
    }

    getch();
    return 0;
}
