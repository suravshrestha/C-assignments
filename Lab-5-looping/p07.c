/*
    Lab 5
    7.  Write a program to read a positive integer and display the sum of digits.
*/

#include <conio.h>
#include <stdio.h>

int main()
{
    int num, num_copy, digit;
    int sum = 0;

    printf("C program to find the sum of digits of a positive integer\n");

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Invalid input.");
    else
    {
        num_copy = num;

        while (num_copy)
        {
            digit = num_copy % 10;
            sum += digit;
            num_copy /= 10;
        }

        printf("Sum of digits of the number %d = %d", num, sum);
    }

    getch();
    return 0;
}