/*
    Lab 3
    5.  Write a program to show the use of format specifier for printing floating data type.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    float a = 123.9876;

    printf("C program to show format specifier variation for real numbers\n");

    printf("Initialization: float a = 123.9876;\n");

    // %f is for numbers with decimal point (float)
    // %e is for floating points in scientific notation
    printf("%%e: %e\n", a);
    printf("%%f: %f\n", a);

    /*
        1.  the integer after % specifies the minimum field width, if the length of output is less than the width, 
            the unused space will be filed with white-spaces, so as to match the field width.
        2.  the integer after . specifies the precision
    */
    printf("%%g: %g\n", a);     // similar to %e
    printf("%%15.4f: %15.4f\n", a); // occupy 15 blocks, 4 decimal precision, i.e. 4 digits after decimal

    printf("%%-15.3f: %-15.3f\n", a); // occupy 15 blocks, left alignment, and 3 decimal precision
    printf("%%015.4e: %015.4e\n", a); // occupy 15 blocks, fill whitespaces with 0's and 4 decimal precision
    printf("%%.8f: %.8f\n", a);    // 8 decimal precision
    printf("%%2.2f: %2.2f", a);     // 2 decimal precision, and minimum field width is less than the output length

    getch();
    return 0;
}
