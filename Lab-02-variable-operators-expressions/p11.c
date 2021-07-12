/*
    Lab 2
    11. Write a program to input two numbers and swap them.
*/

#include <stdio.h>
#include <conio.h> //  for getch()

void main(void)
{
    float a, b, temp;

    printf("C program to swap two numbers\n");

    printf("Enter a number: ");
    scanf("%f", &a);

    printf("Enter another number: ");
    scanf("%f", &b);

    printf("Before swapping:\n");
    printf("a=%.2f b=%.2f\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("a=%.2f b=%.2f", a, b);

    getch();
}
