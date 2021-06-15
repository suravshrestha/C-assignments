/*
    Lab 1
    7.  Write a program to read the values of x and y from the user and evaluate the expression 
        v = x^3 + y^2 - 100 / x
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    float x, y, v;

    if (x == 0)
    {
        printf("Division by zero!");
        return 0;
    }

    printf("Enter the values of x and y: ");
    scanf("%f %f", &x, &y);

    v = x * x * x + y * y - 100.0 / x; // expression

    printf("x^3 + y^2 - 100 / x = %.2f", v);

    getch();
    return 0;
}
