/*
    Practice
    String
    4.  Write a program to read two strings and combine those strings using string handling function.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h> // for strcat()

#define STRING_LENGTH 1000

int main()
{
    printf("C program to combine two strings\n\n");

    char string1[STRING_LENGTH];
    char string2[STRING_LENGTH];

    printf("Enter a string: ");
    gets(string1);

    printf("Enter another string: ");
    gets(string2);

    // concatenate string1 and string2 and store the resultant string in string1
    strcat(string1, string2);

    printf("\nConcatenated string: %s", string1);

    getch();
    return 0;
}
