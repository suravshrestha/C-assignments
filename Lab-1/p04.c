/*
    Lab 1
    4. Write a program to calculate the area, circumference of a circle of radius r.
*/

#include <stdio.h>
#include <conio.h>
#define PI 3.14159 // defining constant (also known as macro)

// int is the return type of this function, so it must return a return value
int main()
{
    float r, area, circumference;

    printf("C program to calculate the area and circumference of circle.\n");

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    // using the defined macros PI
    area = PI * r * r;
    circumference = 2 * PI * r;

    // .2f is for displaying the result with 2 precision floating point
    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f", circumference);

    getch();
    return 0; // for simplicity we just return 0
}
