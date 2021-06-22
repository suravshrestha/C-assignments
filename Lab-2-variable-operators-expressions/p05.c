/*
    Lab 2
    5.  Write a program to enter float, character, long integer and unsigned integer data from the user and display them. 
*/

#include <stdio.h>
#include <conio.h> //  for getch()

void main(void)
{
    float a;
    char b;

    /*
        the limits of data types are stored similar to the numbers on a clock
        upperbound at the top-left end, and the lowerbound at the top-right end
        if user enters a number exceding the limit, 
        next number will be displayed in clockwise direction
        the limits are system dependent, to check the limits use the defined macros of limits.h header file
    */
    long int c;     // in this system [−2147483647, 2147483647]
    unsigned int d; // in this system [0, 4294967295]

    printf("C program to read different data types and show them\n");

    printf("Enter a number with decimal: ");
    scanf("%f", &a);

    printf("Enter a character: ");
    scanf(" %c", &b);

    printf("Enter a large integer: ");
    scanf("%ld", &c);

    printf("Enter a positive integer : ");
    scanf("%u", &d);

    printf("\nFloating data = %.2f\n", a);
    printf("Character = %c\n", b);
    printf("Long integer = %ld\n", c);
    printf("Postive integer = %u", d);

    getch();
}
