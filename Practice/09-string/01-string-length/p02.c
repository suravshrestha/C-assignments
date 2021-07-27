/*
    Practice
    String
    2.  Write a program to read a string from the user and display the length of the string
        using string handling function.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h> // for strlen()

#define STRING_LENGTH 1000

int main()
{
    printf("C program to display length of a string\n");

    // non-initialized strings must be declared with the string length
    // char string[]; is invalid
    char string[STRING_LENGTH];

    // using strlen() function
    printf("\nEnter a string: ");
    gets(string);

    printf("Length = %d", strlen(string));

    getch();
    return 0;
}
