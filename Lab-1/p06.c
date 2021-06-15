/*
    Lab 1
    6. Write a program to calculate the simple interest. Read the values of P, T, R from the user.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    float p, t, r, si;

    printf("Enter the principal, time and rate of interest: ");
    scanf("%f %f %f", &p, &t, &r);

    si = (p * t * r) / 100.0;

    printf("Simple Interest = %.2f", si);

    getch();
    return 0;
}
