/*
    Practice
    String
    12. Write a program to read a string and reverse the string using string handling function.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h> // for strrev()

#define STRING_LENGTH 1000

int main()
{
    printf("C program to reverse a string\n\n");

    char string[STRING_LENGTH];

    printf("Enter a string: ");
    gets(string);

    printf("\nEntered string: %s", string);

    // strrev returns the reverse string
    printf("\nReversed string: %s", strrev(string));

    getch();
    return 0;
}
