/*
    Lab 10
    String
    5.a) Write a program to simulate the task of strlen function.
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

    getch();
    return 0;
}
