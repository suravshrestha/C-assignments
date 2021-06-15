/*
    Lab 1
    4. Write a program to calculate the area, circumference of a circle of radius r.
*/

#include <stdio.h>
#include <conio.h>
#define PI 3.14159

int main()
{
    float r, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    area = PI * r * r;
    circumference = 2 * PI * r;

    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f", circumference);

    getch();
    return 0;
}
