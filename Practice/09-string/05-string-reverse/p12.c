/*
    Practice
    String
    12. Write a program to read a string and reverse the string without using the string handling function strrev.
        Create a separate user defined function, duplicating the strrev function, without the return string functionality.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h> // for strlen()

#define STRING_LENGTH 1000

void reverse_string(char string[])
{
    int len = strlen(string);

    for (int i = 0; i < len / 2; i++)
    {
        // swap characters string[i] and string[len - i - 1]
        char temp;
        temp = string[i];
        string[i] = string[len - i - 1];
        string[len - i - 1] = temp;
    }
}

int main()
{
    printf("C program to reverse a string\n\n");

    char string[STRING_LENGTH];

    printf("Enter a string: ");
    gets(string);

    printf("\nEntered string: %s", string);

    reverse_string(string);

    printf("\nReversed string: %s", string);

    getch();
    return 0;
}
