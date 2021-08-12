/*
    Lab 10
    String
    7.  Write a program that will read a string and a character. Find the frequency of the character in the string.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    char str[100], ch;

    printf("C program to find the frequency of a character in a string\n\n");

    printf("Enter a string: ");
    gets(str);

    printf("\nEnter a character: ");
    scanf("%c", &ch);

    int ch_count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            ch_count++;
    }

    printf("Frequency of %c = %d", ch, ch_count);

    getch();
    return 0;
}
