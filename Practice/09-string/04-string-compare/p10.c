/*
    Practice
    String
    10. Write a program to read two strings and compare those strings without using string handling function.
        Create a separate user defined function, duplicating the strcmp function.
*/

#include <stdio.h>
#include <conio.h>

#define STRING_LENGTH 1000

int string_cmp(char string1[], char string2[])
{
    /*
        && is used in place of || if we want to compare the first characters of the strings
        but, for the entire string comparison we need ||
    */
    for (int i = 0; string1[i] != '\0' || string2[i] != '\0'; i++)
    {
        if (string1[i] != string2[i])
            return -1;
    }

    // strings are equal
    return 0;
}

int main()
{
    printf("C program to compare two strings\n\n");

    char string1[STRING_LENGTH];
    char string2[STRING_LENGTH];

    printf("Enter a string: ");
    gets(string1);

    printf("Enter another string: ");
    gets(string2);

    // string_cmp returns 0 if the strings are equal, else returns -1
    if (string_cmp(string1, string2) == 0)
        printf("\nThe strings \"%s\" and \"%s\" are equal", string1, string2);
    else
        printf("\nThe strings \"%s\" and \"%s\" are not equal", string1, string2);

    getch();
    return 0;
}
