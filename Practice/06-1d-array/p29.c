/*
    Practice
    29. Write a program to sort an array of integers descending order.
        Create a function named sort which takes the array an prints the sorted array in the function sort itself.
*/

#include <stdio.h>
#include <conio.h>

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void sort(int arr[], int n)
{
    // Using Selection sort
    // Time complexity: O(n^2)

    // Descending order
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
                swap(&arr[i], &arr[j]);
        }
    }

    printf("\n\nIn descending order:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main()
{
    printf("C program to sort an array of integers in descending order\n\n");

    int n;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", &arr[i]);
    }

    sort(arr, n);

    getch();
    return 0;
}
