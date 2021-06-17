/*
    Lab 2
    4.  Write a program to input 2 numbers and display the sum.
*/

#include <stdio.h>
#include <conio.h> //  for getch()

void main(void)
{
    float a, b, sum;

    printf("C program the display the sum of two numbers.\n");

    printf("Enter any two numbers: ");
    scanf("%f %f", &a, &b);

    sum = a + b;

    printf("Sum = %.2f", sum);

    getch();
}
