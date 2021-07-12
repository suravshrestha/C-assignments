/*
    Lab 3
    4.  Write a program to show the use of format specifier for printing integer data type.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 12345;

    printf("C program to show format specifier variation for integers\n");

    printf("Initialization: int a = 12345;\n");

    // %d or %i can be used for integer format specifier
    printf("%%d: %d\n", a);
    printf("%%i: %i\n", a);

    /*
        1.  the integer after % specifies the minimum field width, if the length of output is less than the width, 
            the unused location will be filed with white-spaces, so as to match the field width.
        2.  '-' is for left alignment
    */
    printf("%%15d: %15d\n", a);   // occupy 15 blocks
    printf("%%-15d: %-15d\n", a); // left align and occupy 15 blocks

    printf("%%015d: %015d\n", a);   // occupy 15 blocks, and fill the blank blocks with 0's
    printf("%%-+15d: %-+15d\n", a); // occupy 15 blocks, left alignment, and a '+' at the front
    printf("%%3d: %3d", a);         // here the field width is less than the length of output

    getch();
    return 0;
}
