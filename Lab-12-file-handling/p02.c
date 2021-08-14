/*
    Lab 12
    File handling
    2.  Write a program to ask for words until the user enters 'n' or 'N'.
        Write the words to a file if the word is free of vowels.
*/

#include <stdio.h>
#include <conio.h>

int is_vowel_free(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            return 0;
        }

        i++;
    }

    // vowel free
    return 1;
}

int main()
{
    printf("C program to write vowel free words to a file\n\n");

    FILE *fp = fopen("p02_vowel_free_words.txt", "a+");

    char word[50];

    char option;

    while (1)
    {
        printf("Enter a word: ");
        scanf("%s", word);

        if (is_vowel_free(word))
        {
            fprintf(fp, "%s\n", word);
        }

        printf("\nn/N: Stop entering record\n");
        option = getche();

        if (option == 'n' || option == 'N')
            break;
    }

    fclose(fp);

    return 0;
}
