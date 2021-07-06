/*
    Practice
    21. Write a program to input two numbers and any one of the four arithmetic operators from the user and print the respective arithmetic result using switch statement,
        and continue until the user enters 'e'. Create separate functions for separate arithmetic operation.
*/

#include <stdio.h>
#include <conio.h>

void add(float a, float b)
{
    printf("\n%.2f + %.2f = %.2f", a, b, a + b);
}

void sub(float a, float b)
{
    printf("\n%.2f - %.2f = %.2f", a, b, a - b);
}

void mul(float a, float b)
{
    printf("\n%.2f x %.2f = %.2f", a, b, a * b);
}

void div(float a, float b)
{
    if (b == 0)
        printf("Division by zero not possible.");
    else
        printf("\n%.2f / %.2f = %.2f", a, b, a / b);
}

int main()
{
    float a, b;
    char operator, exit_option;

    printf("C program to perform basic arithmetic operation repetitive\n");

    do
    {
        printf("\nEnter any two numbers: ");
        scanf("%f %f", &a, &b);

        printf("Enter an arithmetic operator (+, -, x, / ): ");
        operator= getche();

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
            printf("\nSorry, I don't understand that.");
            break;
        }

        printf("\nPress 'e' if you want to stop the program: ");
        exit_option = getche();
    } while (exit_option != 'e');

    getch();
    return 0;
}
