/*
    Lab 2
    8.  Write a program to read two points A(x1, y1) and B(x2, y2) and display the mid-point.

    Formula used:
    Mid-point = (x, y)
    x = (x1 + x2)/ 2;
    y = (y1 + y2)/ 2;
*/

#include <stdio.h>
#include <conio.h> //  for getch()

void main(void)
{
    float x1, y1, x2, y2, x, y;

    printf("C Program to input two points A(x1, y1) and B(x2, y2) and display the mid-point.\n");

    printf("Enter the value of x1: ");
    scanf("%f", &x1);

    printf("Enter the value of y1: ");
    scanf("%f", &y1);

    printf("Enter the value of x2: ");
    scanf("%f", &x2);

    printf("Enter the value of y2: ");
    scanf("%f", &y2);

    x = (x1 + x2) / 2;
    y = (y1 + y2) / 2;

    printf("\nThe mid-point of the points A(%.2f, %.2f) and B(%.2f, %.2f) is (%.2f, %.2f)", x1, y1, x2, y2, x, y);

    getch();
}
