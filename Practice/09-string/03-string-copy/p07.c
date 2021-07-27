/*
    Practice
    String
    7.  Write a program to read a string and copy the string in a new variable using string handling function.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h> // for strcpy()

#define STRING_LENGTH 1000

int main()
{
    printf("C program to copy a string\n\n");

    char string1[STRING_LENGTH];
    char string2[STRING_LENGTH];

    printf("Enter a string: ");
    gets(string1);

    /*
        Unlike strlen and strcat, strcpy returns the result
        copy string1 to string2
    */
    printf("\nCopied string: %s", strcpy(string2, string1));
    printf("\nstring2 = %s", string2);

    getch();
    return 0;
}
