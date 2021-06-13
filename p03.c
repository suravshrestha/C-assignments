/*
    3. WAP to input two numbers and any one of the four arithmetic operators 
    from the user and print the respective arithmetic result using switch statement.
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

    switch (operator)
    {
    case '+':
        printf("%.2f + %.2f = %.2f", a, b, a + b);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f", a, b, a - b);
        break;
    case 'x':
        printf("%.2f x %.2f = %.2f", a, b, a * b);
        break;
    case '/':
        if (b == 0)
        {
            printf("Division by zero is not possible.");
            break;
        }
        printf("%.2f / %.2f = %.2f", a, b, a / b);
        break;

    default:
        printf("Sorry, I don't understand the operator.");
        break;
    }

    getch();
    return 0;
}