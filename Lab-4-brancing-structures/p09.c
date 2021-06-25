/*
    Lab 4
    9.  Write a program to input two numbers and any one of the four arithmetic operators 
        from the user and print the respective arithmetic result.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    float a, b;
    char operator;

    printf("Enter any two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Enter an arithmetic operator (+, -, x, / ): ");
    scanf(" %c", &operator);

    if (operator== '+')
        printf("%.2f + %.2f = %.2f", a, b, a + b);
    else if (operator== '-')
        printf("%.2f - %.2f = %.2f", a, b, a - b);
    else if (operator== 'x')
        printf("%.2f x %.2f = %.2f", a, b, a * b);
    else if (operator== '/')
    {
        if (b == 0)
            printf("Division by zero is not possible.");

        printf("%.2f / %.2f = %.2f", a, b, a / b);
    }
    else
        printf("Sorry, I don't understand the operator.");

    getch();
    return 0;
}
