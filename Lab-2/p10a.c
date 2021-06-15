/*
    Lab 2
    10.a)   Write a program to evaluate the following expressions:
            x^5 + 0.2xy + y^7
*/

#include <stdio.h>
#include <conio.h> //  for getch()
#include <math.h>  //  for pow()

void main(void)
{
    float x, y, result;

    printf("C program to evaluate the following expression:\n");
    printf("x^5 + 0.2xy + y^7\n");

    printf("Enter the values of x and y: ");
    scanf("%f %f", &x, &y);

    result = pow(x, 5) + 0.2 * x * y + pow(y, 7);

    printf("Result = %.2f", result);

    getch();
}
