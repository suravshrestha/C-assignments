/*
    Practice
    String
    5.  Write a program to read two strings and combine those strings without using string handling function.
        Create a separate user defined function, duplicating the strcat function.
*/

#include <stdio.h>
#include <conio.h>

#define STRING_LENGTH 1000

void string_concatenate(char string1[], char string2[])
{

    int i, prev_index;
    for (i = 0; string1[i] != '\0'; i++)
        ;

    prev_index = i; // the position of the null character of string1
    for (i = 0; string2[i] != '\0'; i++)
    {
        // the first iteration of this loop replaces the null character
        string1[prev_index] = string2[i];
        prev_index++;
    }

    // This is important. If we don't terminate a string, it will result unwanted behavior.
    string1[prev_index] = '\0'; // terminate the string1 with null character
}

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
    string_concatenate(string1, string2);

    printf("\nConcatenated string: %s", string1);

    getch();
    return 0;
}
