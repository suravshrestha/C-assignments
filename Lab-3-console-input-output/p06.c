/*
    Lab 3
    6.  Write a program to show the use of format specifier for printing character data type.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    // always use single quotes for character initialization
    // if we use double quotes, a character array is initialized as {'a', '\0'};
    char ch = 'a';

    printf("C program to show format specifier variation for characters\n");

    printf("Initialization: char ch = 'a';\n");

    // %c is used for format specifier
    printf("%%c: %c\n", ch);
    printf("%%10c: %10c\n", ch); // occupy 10 blocks
    printf("%%-10c: %-10c", ch); // occupy 10 blocks, left alignment

    getch();
    return 0;
}
