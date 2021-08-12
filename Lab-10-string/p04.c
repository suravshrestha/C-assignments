/*
    Lab 10
    String
    4.  Write a program to reverse a string using recursion.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAX_LIMIT 50

void swap(char *ptr1, char *ptr2)
{
    char temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void str_rev(char str[], int i, int j)
{
    if (i >= j)
        return;

    swap(&str[i], &str[j]);

    str_rev(str, i + 1, j - 1);
}

int main()
{
    char str[MAX_LIMIT];

    printf("C program to reverse a string using recursion\n\n");

    printf("Enter a string: ");
    gets(str);

    int length = strlen(str);

    str_rev(str, 0, length - 1);

    printf("\nReversed string: %s", str);

    getch();
    return 0;
}
