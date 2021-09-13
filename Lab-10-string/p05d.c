/*
    Lab 10
    String
    5.d) Write a program to simulate the task of strcmp function.
         Create a separate user defined function, duplicating the strcmp function.
*/

#include <stdio.h>
#include <conio.h>

#define MAX_LEN 1000

int str_cmp(char s1[], char s2[])
{
    /*
        && is used in place of || if we want to compare the first characters of the strings
        but, for the entire string comparison we need ||
    */
    for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
    }

    // strings are equal
    return 0;
}

int main()
{
    printf("C program to compare two strings\n\n");

    char s1[MAX_LEN];
    char s2[MAX_LEN];

    printf("Enter a string: ");
    gets(s1);

    printf("Enter another string: ");
    gets(s2);

    // str_cmp returns 0 if the strings are equal, else returns non-zero integer
    if (str_cmp(s1, s2) == 0)
        printf("\nThe strings \"%s\" and \"%s\" are equal", s1, s2);
    else
        printf("\nThe strings \"%s\" and \"%s\" are not equal", s1, s2);

    getch();
    return 0;
}
