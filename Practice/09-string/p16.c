/*
    Practice
    String
    16. Write a program to read a string and find the number of words in the string.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    printf("C program to find the number of words in a string\n\n");

    char str[1000];

    printf("Enter a string: ");
    gets(str);

    // words are separated by ' ' or '\t' or a combination of these characters
    // sep keeps track of whether the character in str is a separator or not
    int sep = 1;

    int words_count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\t')
            sep = 1;
        else if (sep == 1)
        {
            // separator not found
            sep = 0;
            words_count++;
        }
    }

    printf("\nTotal number of words = %d", words_count);

    /*
        Sample input:
        string1:         Hello   world!      this is a       program written in C
        Result: 9

        string2: Hello world! ths is a program written in C
        Result: 9
    */
}
