/*
    Lab 8
    1D array
    4.  Write a program to read an array of integers of size n in main function. Pass it to functions for sorting in ascending and descending order.
        Display the sorted array in main function. Read the value of n from the user.
*/

#include <stdio.h>
#include <conio.h>

void swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void sort_ascend(int arr[], int n)
{
    /*
        Selection sort
        Time complexity: O(n^2)
    */

    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }

        if (i != min_index)
        {
            swap(&arr[i], &arr[min_index]);
        }
    }
}

void sort_descend(int arr[], int n)
{
    /*
        Selection sort
        Time complexity: O(n^2)
    */

    for (int i = 0; i < n - 1; i++)
    {
        int max_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[max_index])
            {
                max_index = j;
            }
        }

        if (i != max_index)
        {
            swap(&arr[i], &arr[max_index]);
        }
    }
}

int main()
{
    printf("C program to sort an array of integers in ascending and descending order\n\n");

    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];

    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter integer: ");
        scanf("%d", &arr[i]);
    }

    sort_ascend(arr, n);

    printf("\nSorted array in ascending order:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    sort_descend(arr, n);

    printf("\n\nSorted array in descending order:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    getch();
    return 0;
}
