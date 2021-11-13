/*
    Practice
    String
    13. Write a program to sort an array of strings in ascending order
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

#define CHAR_LIMIT 1000

void sort_arr(int n, char arr[][CHAR_LIMIT])
{
    // Using Selection sort
    // Time complexity: O(n^2)

    char temp[CHAR_LIMIT]; // for swapping strings
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        // compare the string at (i)th index with strings after the (i)th index
        for (int j = i + 1; j < n; j++)
        {
            // strcmp returns the difference in ASCII value of the first unmatched character strings
            // left unmatched character - right unmatched character
            if (strcmp(arr[j], arr[min_index]) < 0)
            {
                min_index = j;
            }
        }

        if (i != min_index)
        {
            // swap the string in (i)th and (min_index)th index
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[min_index]);
            strcpy(arr[min_index], temp);
        }

        // now the (i)th position of arr is sorted
        // so, we don't need to compare string at (i)th position with any other strings in arr
    }
}

int main()
{
    printf("C program to sort an array of strings in ascending order\n\n");

    int n;

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char arr[n][CHAR_LIMIT];

    /*
        for clearing the input buffer
        fflush(stdin) works but is discouraged to use as it doesn't work for most compilers
    */
    while (getchar() != '\n')
    {
    }

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter string: ");
        gets(arr[i]);
    }

    sort_arr(n, arr);

    printf("\nSorted array of strings:");
    for (int i = 0; i < n; i++)
        printf("\n%s", arr[i]);

    getch();
    return 0;
}
