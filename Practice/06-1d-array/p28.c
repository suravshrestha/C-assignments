/*
    Practice
    28. Write a program to sort an array of integers in both ascending and descending order
*/

#include <stdio.h>
#include <conio.h>

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    printf("C program to sort an array of integers in both ascending and descending order\n\n");

    int n, temp;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];

    int i, j; // loop variables

    for (int i = 0; i < n; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", &arr[i]);
    }

    // Using Selection sort
    // Time complexity: O(n^2)

    // Ascending order
    for (i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (j = i + 1; j < n; j++)
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

    printf("\nIn ascending order:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // Descending order
    for (i = 0; i < n - 1; i++)
    {
        int max_index = i;
        for (j = i + 1; j < n; j++)
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

    printf("\n\nIn descending order:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    getch();
    return 0;
}
