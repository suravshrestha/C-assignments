/*
    Lab 1
    6. Write a program to calculate the simple interest. Read the values of principal, time, and rate of interest from the user.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    float p, t, r, si;

    printf("C program to calculate the Simple Interest.\n");

    printf("Enter the principal, time and rate of interest: ");
    scanf("%f %f %f", &p, &t, &r);

    si = (p * t * r) / 100.0;

    printf("Simple Interest = %.2f", si);

    getch();
    return 0;
}
