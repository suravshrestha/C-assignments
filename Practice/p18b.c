/*
    Practice
    18.b)   Write a program to add two numbers using function with return type, but no argument.
*/

#include <stdio.h>
#include <conio.h>

float a, b; // global variables

// function prototype
float add();

// function definition
float add()
{
    printf("C program to find the sum of two numbers\n\n");

    printf("Enter any two numbers: ");
    scanf("%f %f", &a, &b);

    return a + b;
}

int main()
{
    printf("%.2f + %.2f = %.2f", a, b, add());

    getch();
    return 0;
}
