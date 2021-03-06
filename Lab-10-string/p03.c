/*
    Lab 10
    String
    3.  Write a program to read a string, pass it to a non-return type function that finds the longest word in the string, counts the number of
        vowels and consonants in the string. Display the counts and the longest word in the main function.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAX_LIMIT 1000

void find_longest_word_and_counts(char str[], char longest_str[], int *vowels, int *consonants)
{
    int sep = 1;

    int current_word_length = 0;

    int max_word_length = 0;

    int first_index = 0;

    int max_word_first_index = 0;

    int i = 0;

    while (1)
    {
        //  count vowels and consonants
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            (*vowels)++;
        }
        else if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)) // ASCII code for alphabet
        {
            (*consonants)++;
        }

        //  for finding the longest word
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\0')
        {
            sep = 1;

            if (current_word_length > max_word_length)
            {
                max_word_length = current_word_length;
                max_word_first_index = first_index;
            }

            current_word_length = 0;
        }
        else if (sep == 1)
        {
            // separator not found

            if (str[i - 1] == ' ' || str[i - 1] == '\t')
                first_index = i;

            sep = 0;

            current_word_length++;
        }
        else
        {
            current_word_length++;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    int j = 0;
    for (int i = max_word_first_index; i < max_word_first_index + max_word_length; i++)
    {
        longest_str[j] = str[i];
        j++;
    }

    longest_str[j] = '\0'; // terminate the string
}

int main()
{
    printf("C program to find the longest word, number of vowels and consonants in a string\n\n");

    char str[MAX_LIMIT];
    char longest_str[MAX_LIMIT];

    int vowels = 0;
    int consonants = 0;

    printf("Enter a string: ");
    gets(str);

    find_longest_word_and_counts(str, longest_str, &vowels, &consonants);

    printf("\nLongest word: \"%s\"\n\n", longest_str);

    printf("Vowel count: %d\n", vowels);
    printf("Consonant count: %d", consonants);

    getch();
    return 0;
}
