/*
    Lab 2
    3.  Write a program to input 3 numbers from the user and display the largest number.
*/

#include <stdio.h>
#include <conio.h> //  for getch()

void main(void)
{
    float a, b, c, largest;

    printf("Enter any three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b == c)
    {
        printf("All numbers are equal.");
        return;
    }

    largest = (a > b && a > c) ? a : ((b > c && b > a) ? b : c);

    printf("Largest = %.2f", largest);

    getch();
}
