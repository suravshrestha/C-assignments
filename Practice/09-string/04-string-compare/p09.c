/*
    Practice
    String
    9.  Write a program to read two strings and compare those strings using string handling function.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h> // for strcmp()

#define STRING_LENGTH 1000

int main()
{
    printf("C program to compare two strings\n\n");

    char string1[STRING_LENGTH];
    char string2[STRING_LENGTH];

    printf("Enter a string: ");
    gets(string1);

    printf("Enter another string: ");
    gets(string2);

    // strcmp returns 0 if the strings are equal, else returns non-zero value
    if (strcmp(string1, string2) == 0)
        printf("\nThe strings \"%s\" and \"%s\" are equal", string1, string2);
    else
        printf("\nThe strings \"%s\" and \"%s\" are not equal", string1, string2);

    getch();
    return 0;
}
