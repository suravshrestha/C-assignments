/*
    Lab 7
    2.  Write a program to find the sum of digits of an integer using non return type function.
*/

#include <stdio.h>
#include <conio.h>

void sum_of_digits(int num)
{
    int sum = 0;
    int num_copy, digit;

    num_copy = num;

    while (num_copy)
    {
        digit = num_copy % 10;
        sum += digit;
        num_copy /= 10;
    }

    printf("The sum of digits of the number %d is %d", num, sum);
}

int main()
{
    int num;

    printf("C program to find the sum of digits of an integer\n\n");

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Invalid input.");
    else
        sum_of_digits(num);

    getch();
    return 0;
}
