/*
    Practice
    String
    14. Write a program to sort an array of strings in descending order
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
    for (int i = 0; i < n; i++)
    {
        // compare the string at (i)th index with strings after the (i)th index
        for (int j = i + 1; j < n; j++)
        {
            // strcmp returns the difference in ASCII value of the first unmatched character strings
            // left unmatched character - right unmatched character
            if (strcmp(arr[i], arr[j]) < 0)
            {
                // swap the string in (i)th and (j)th index
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
        // now the (i)th position of arr is sorted
        // so, we don't need to compare string at (i)th position with any other strings in arr
    }
}

int main()
{
    printf("C program to sort an array of strings in descending order\n\n");

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

    printf("\nSorted array of strings:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);

    getch();
    return 0;
}
