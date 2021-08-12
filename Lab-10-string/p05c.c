/*
    Practice
    String
    5.c) Write a program to simulate the task of strcpy function
         Create a separate user defined function, duplicating the strcpy function, without the return string functionality.
*/

#include <stdio.h>
#include <conio.h>

#define STRING_LENGTH 1000

void string_copy(char string2[], char string1[])
{
    int i;
    for (i = 0; string1[i] != '\0'; i++)
        string2[i] = string1[i];

    // This is important. If we don't terminate a string, it will result unwanted behavior.
    string2[i] = '\0'; // terminate string2 with null character
}

int main()
{
    printf("C program to copy a string\n\n");

    char string1[STRING_LENGTH];
    char string2[STRING_LENGTH];

    printf("Enter a string: ");
    gets(string1);

    // copy string1 to string2
    string_copy(string2, string1);

    printf("\nCopied string: %s", string2);
    printf("\nstring2 = %s", string2);

    getch();
    return 0;
}
