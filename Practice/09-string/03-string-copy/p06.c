/*
    Practice
    String
    6.  Write a program to read two strings and combine those strings without using string handling function.
        Create a separate user defined function to combine those strings. Store the combined string in a separate variable.
*/

#include <stdio.h>
#include <conio.h>

#define STRING_LENGTH 1000

void string_concatenate(char string1[], char string2[], char final_string[])
{

    int i, prev_index;
    for (i = 0; string1[i] != '\0'; i++)
        final_string[i] = string1[i];

    prev_index = i; // the position of the null character of string1
    for (i = 0; string2[i] != '\0'; i++)
    {
        // the first iteration of this loop replaces the null character
        final_string[prev_index] = string2[i];
        prev_index++;
    }

    // This is important. If we don't terminate a string, it will result unwanted behavior.
    final_string[prev_index] = '\0'; // terminate the final_string with null character
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

    char final_string[2 * STRING_LENGTH];

    string_concatenate(string1, string2, final_string);

    printf("\nConcatenated string: %s", final_string);

    getch();
    return 0;
}
