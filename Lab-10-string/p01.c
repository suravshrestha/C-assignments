/*
    Lab 10
    String
    1.  Write a program to check whether a string given by the user is Palindrome or not.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAX_LIMIT 50

int main()
{
    char str[MAX_LIMIT], original_str[MAX_LIMIT];

    printf("C program to check whether a string is Palindrome or not\n\n");

    printf("Enter a string: ");
    gets(str);

    // strrev modifies the original string, so we store the string in a new variable
    strcpy(original_str, str);

    if (strcmp(original_str, strrev(str)) == 0)
        printf("\"%s\" is a Palindrome string.", original_str);
    else
        printf("\"%s\" is not a Palindrome string.", original_str);

    getch();
    return 0;
}
