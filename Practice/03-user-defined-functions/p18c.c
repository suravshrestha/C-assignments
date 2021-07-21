/*
    Practice
    18.c)   Write a program to add two numbers using function with no return type, but argument.
*/

#include <stdio.h>
#include <conio.h>

// function prototype
void add(float a, float b);

// function definition
void add(float a, float b)
{
    printf("%.2f + %.2f = %.2f", a, b, a + b);
}

int main()
{
    float a, b;

    printf("C program to find the sum of two numbers\n\n");

    printf("Enter any two numbers: ");
    scanf("%f %f", &a, &b);

    add(a, b);

    getch();
    return 0;
}
