/*
    Practice
    String
    3.  Write a program to read a string from the user and display the length of the string
        without using string handling function.
        Create a separate user defined function to find the length.
*/

#include <stdio.h>
#include <conio.h>

#define STRING_LENGTH 1000

int string_length(char string[])
{
    // using loop
    int i = 0;
    while (string[i] != '\0')
        i++;

    return i;
}

int main()
{
    printf("C program to display length of a string\n");

    // non-initialized strings must be declared with the string length
    // char string[]; is invalid
    char string[STRING_LENGTH];

    printf("\nEnter a string: ");
    gets(string);

    printf("Length = %d", string_length(string));

    // /*
    //     using sizeof unary operator
    //     This works only if the string is initialized with a value
    // */
    // char str[] = "Dennis Ritchie";
    // printf("\n\n\nWith sizeof operator:");
    // printf("\nchar str[] = \"Dennis Ritchie\"");
    // printf("\nLength of str = %d", sizeof(str) / sizeof(str[0]) - 1);
    // /*
    //     Equivalent to:
    //     sizeof(str) / sizeof(char) - 1
    //     or,
    //     sizeof(str) - 1
    //     since, sizeof(char) = 1

    //     -1 is for decreasing the length consumed by null character '\0'
    // */

    getch();
    return 0;
}
