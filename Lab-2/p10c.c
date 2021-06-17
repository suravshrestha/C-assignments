/*
    Lab 2
    10.c)   Write a program to evaluate the following expressions:
            a/ b (where a and b are integers)
*/

#include <stdio.h>
#include <conio.h> //  for getch()

void main(void)
{
    int a, b;
    float result;

    printf("C program to evaluate the following expression:\n");
    printf("a/ b (where a and b are integers)\n");

    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);

    if (b == 0)
    {
        printf("Error! Division by zero!!");
        return;
    }

    result = (float)a / b; // type casting

    printf("Result = %.2f", result);

    getch();
}
