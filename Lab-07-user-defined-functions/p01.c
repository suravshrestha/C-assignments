/*
    Lab 7
    1.  Write a program to add two numbers (one integer, another float) using return type function.
*/

#include <stdio.h>
#include <conio.h>

float add(int a, float b)
{
    return a + b;
}

int main()
{
    int a;
    float b;

    printf("C program to add integer and floating point number\n\n");

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter a floating point number: ");
    scanf("%f", &b);

    printf("%d + %.2f = %.2f", a, b, add(a, b));

    getch();
    return 0;
}
