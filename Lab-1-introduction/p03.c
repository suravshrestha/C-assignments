/*
    Lab 1
    3.  Type the following program and run and see the output.
*/

#include <stdio.h> // for basic I/ O operations
#include <conio.h> // for getch()

void main()
{
    int s, a, b; // variable declaration
    float p;     // float variable declaration

    printf("C program to demonstrate the use of & and sizeof unary operators.\n");

    /*
        & operator is a unary operator known as address of operator
        This operator is used to get the address of the operand passed
        addresses in computer are stored in hexadecimal format
        %x is format specifier for hexadecmial
    */
    printf("Address of s is %x", &s);
    printf("\nAddress of a is %x", &a);

    /*
        sizeof is a unary operator which gives the space occupied by the operand in the system in bytes.
        since the space occupied is system dependent, the output is system dependent
    */
    // a and s are integers, so displays the size of integer.
    printf("\n\nSize occupied by variable s in bytes is %d", sizeof(s));
    printf("\nSize of a = %d", sizeof(a));

    printf("\nSize of 1.5 = %d", sizeof(1.5));
    printf("\nSize of float data type = %d", sizeof(float));

    getch(); // to make program wait until user enters any character
}
