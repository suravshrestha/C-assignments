/*
    Practice
    18.a)   Write a program to add two numbers using function with return type and argument.
*/

#include <stdio.h>
#include <conio.h>

// function prototype
float add(float a, float b);

// function definition
float add(float a, float b)
{
    return a + b;
}

int main()
{
    float a, b;

    printf("C program to find the sum of two numbers\n\n");

    printf("Enter any two numbers: ");
    scanf("%f %f", &a, &b);

    printf("%.2f + %.2f = %.2f", a, b, add(a, b));

    getch();
    return 0;
}
