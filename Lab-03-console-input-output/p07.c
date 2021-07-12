/*
    Lab 3
    7.  Write a program to show the use of format specifier for printing string.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    // string is an array of characters,
    char name[] = "Dennis Ritchie";

    printf("C program to show format specifier variation for strings\n");

    printf("Initialization: char name[] = \"Dennis Ritchie\";\n");

    // the integer after . is the number of characters to display starting from first character of the string
    // %s is used for format specifier
    printf("%%s: %s\n", name);
    printf("%%18s: %18s\n", name);       // occupy 18 blocks
    printf("%%-18s: %-18s\n", name);     // occupy 18 blocks, left alignment
    printf("%%18.8s: %18.8s\n", name);   // occupy 18 blocks, left alignment, and display the first 8 characters only
    printf("%%-18.9s: %-18.9s\n", name); // occupy 18 blocks, left alignment, and display the first 9 characters only
    printf("%%5s: %5s\n", name);         // field width less than string length
    printf("%%.10s: %.10s", name);       // display only the first 10 characters of the string

    getch();
    return 0;
}
