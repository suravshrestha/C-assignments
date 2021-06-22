/*
    Lab 1
    9.  Write a program to read length, breadth, and height of a cuboid and display its volume.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    float l, b, h, volume;

    printf("C program to find the volume of a cuboid\n");

    printf("Enter the length, breadth and height of cuboid: ");
    scanf("%f %f %f", &l, &b, &h);

    volume = l * b * h;

    printf("Volume of the cuboid = %.2f", volume);

    getch();
    return 0;
}
