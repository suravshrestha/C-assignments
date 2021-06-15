/*
    Lab 1
    5. Write a program to calculate the volume of sphere of radius r.
*/

#include <stdio.h>
#include <conio.h>
#define PI 3.14159

int main()
{
    float r, volume;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &r);

    volume = 4.0 / 3.0 * PI * r * r * r;

    printf("Volume of the sphere = %.2f", volume);

    getch();
    return 0;
}
