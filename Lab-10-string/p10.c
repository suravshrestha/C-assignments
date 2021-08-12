/*
    Lab 10
    String
    10. Write a program to read the name of 10 students store them in an array. Pass the array to a function which sorts the name array.
        Display the sorted array in main function.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

#define CHAR_LIMIT 1000

void sort(char name_arr[][CHAR_LIMIT])
{
    char temp[CHAR_LIMIT];

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (strcmp(name_arr[i], name_arr[j]) > 0)
            {
                strcpy(temp, name_arr[i]);
                strcpy(name_arr[i], name_arr[j]);
                strcpy(name_arr[j], temp);
            }
        }
    }
}

int main()
{
    printf("C program to sort an array of 10 names\n\n");

    char name_arr[10][CHAR_LIMIT];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter a name: ");
        gets(name_arr[i]);
    }

    sort(name_arr);

    printf("\nSorted array of names:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", name_arr[i]);
    }

    getch();
    return 0;
}
