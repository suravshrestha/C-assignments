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

    printf("C program to calculate the volume of a sphere.\n");

    printf("Enter the radius of the sphere: ");
    scanf("%f", &r);

    /*
        4.0 and 3.0 is a form of type casting
        if we did 4/ 3, it would give us 1, since (int)/ (int) = (int)
        so to deal with this error we use type casting
        (float) / (float) = (float)
        i.e. 4.0/ 3.0 = 1.33 ... 
    */
    volume = 4.0 / 3.0 * PI * r * r * r;

    printf("Volume of the sphere = %.2f", volume);

    getch();
    return 0;
}
