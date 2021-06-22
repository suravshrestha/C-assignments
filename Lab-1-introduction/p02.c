/*
    Lab 1
    2.  Type the following program and run with different input.
*/

#include <stdio.h> // for basic I/ O operations
#include <conio.h> // for getch()

void main()
{
    int s, a, b, c = 20; // variable declaration

    printf("C program to demonstrate basic Input, Processing, Output operation.\n");

    printf("Enter the value of a: "); // to display the message on the screen.
    scanf("%d", &a);                  // to give value of a

    printf("Enter the value of b: "); // to display the message on the screen.
    scanf("%d", &b);

    s = b + c; // processing

    printf("b + c = %d", s); // to display value stored at s
    printf("\nwhere, c = 20");

    getch(); // to make program wait until user enters any character
}
