/*
    Lab 2
    3.  Write a program to input 3 numbers from the user and display the largest number.
*/

#include <stdio.h>
#include <conio.h> //  for getch()

void main(void)
{
    float a, b, c, largest;

    printf("C program to display the largest among three numbers\n");

    printf("Enter any three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b == c)
    {
        printf("All numbers are equal.");
        return;
    }

    /*
        ? : is a ternary operator.
        There is only one ternary operator in C, it is also known as conditional operator.
        It is a shorthand way of writing if-else statement.
        It is known as ternary operator because it works on 3 operands (or expressions)
    */

    largest = (a > b && a > c) ? a : ((b > c && b > a) ? b : c);

    printf("Largest = %.2f", largest);

    getch();
}
