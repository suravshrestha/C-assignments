/*
    Practice
    20. Write a program to input two numbers and any one of the four arithmetic operators from the user and print the respective arithmetic result using switch statement.
        Create separate functions for separate arithmetic operation.
*/

#include <stdio.h>
#include <conio.h>

void add(float a, float b)
{
    printf("%.2f + %.2f = %.2f", a, b, a + b);
}

void sub(float a, float b)
{
    printf("%.2f - %.2f = %.2f", a, b, a - b);
}

void mul(float a, float b)
{
    printf("%.2f x %.2f = %.2f", a, b, a * b);
}

void div(float a, float b)
{
    if (b == 0)
        printf("Division by zero not possible.");
    else
        printf("%.2f / %.2f = %.2f", a, b, a / b);
}

int main()
{
    float a, b;
    char operator;

    printf("C program to perform basic arithmetic operation\n");

    printf("Enter any two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Enter an arithmetic operator (+, -, x, / ): ");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        add(a, b);
        break;
    case '-':
        sub(a, b);
        break;
    case 'x':
        mul(a, b);
        break;
    case '/':
        div(a, b);
        break;

    default:
        printf("Sorry, I don't understand that.");
        break;
    }

    getch();
    return 0;
}
