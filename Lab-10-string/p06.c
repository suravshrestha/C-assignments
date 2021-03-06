/*
    Lab 10
    String
    6.  Write a program that will read a string and rewrite it in alphabetical order. 
        For example, the world NEPAL should be written as AELNP.
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

    for (int i = 0; i < length - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < length; j++)
        {
            if (str[j] < str[min_index])
            {
                min_index = j;
            }
        }

        if (i != min_index)
        {
            swap(&str[i], &str[min_index]);
        }
    }
}

int main()
{
    char str[100];

    printf("C program to sort a string in alphabetical order\n\n");

    printf("Enter a string: ");
    gets(str);

    sort_string(str);

    printf("\nString in alphabetical order: \"%s\"", str);

    getch();
    return 0;
}
