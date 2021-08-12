/*
    Lab 10
    String
    8.  Write a program to read a string and find the frequency of all the characters in the string.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

char swap(char *ptr1, char *ptr2)
{
    char temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void sort_string(char str[])
{
    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (str[j] > str[i])
                swap(&str[i], &str[j]);
        }
    }
}

int main()
{
    char str[100], ch;

    printf("C program to find the frequency of all the characters in a string\n\n");

    printf("Enter a string: ");
    gets(str);

    sort_string(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        int ch_count = 1;

        if (str[i] == str[i - 1])
            continue;

        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[j] == str[i])
                ch_count++;
        }

        printf("\nFrequency of %c = %d", str[i], ch_count);
    }

    getch();
    return 0;
}
