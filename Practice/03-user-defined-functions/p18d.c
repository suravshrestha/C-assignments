/*
    Practice
    18.d)   Write a program to add two numbers using function with no return type, and no argument.
*/

#include <stdio.h>
#include <conio.h>

// function prototype
void add();

// function definition
void add()
{
    float a, b;

    printf("C program to find the sum of two numbers\n\n");

    printf("Enter any two numbers: ");
    scanf("%f %f", &a, &b);

    printf("%.2f + %.2f = %.2f", a, b, a + b);
}

int main()
{
    add();

    getch();
    return 0;
}
