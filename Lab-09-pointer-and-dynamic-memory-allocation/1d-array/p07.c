/*
    Lab 9
    Pointer and Dynamic memory allocation
    1D array
    7.  Write a program to read an array of numbers and find the median of those number.
        Use pointer notation for arrays and Dynamic memory allocation.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

void swap(float *ptr1, float *ptr2)
{
    float temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void sort(float arr[], int n)
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
            if (*(arr + j) < *(arr + min_index))
            {
                min_index = j;
            }
        }

        if (i != min_index)
        {
            swap(arr + i, arr + min_index);
        }
    }
}

float median(float arr[], int n)
{
    float a = (n + 1) / 2.0;
    float median;

    int int_part = (int)a;
    float decimal_part = a - int_part;

    if (n % 2 != 0)
    {
        // odd number of elements
        median = *(arr + int_part - 1);
    }
    else
    {
        // even number of elements
        median = *(arr + int_part - 1) + decimal_part * (*(arr + int_part) - *(arr + int_part - 1));
    }

    return median;
}

int main()
{
    printf("C program to find the median of an array of numbers\n\n");

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    float *arr = malloc(n * sizeof(float));

    for (int i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%f", arr + i);
    }

    // sort in ascending order
    sort(arr, n);

    printf("\nThe entered numbers in ascending order:\n");
    for (int i = 0; i < n; i++)
        printf("%.2f ", *(arr + i));

    printf("\nMedian = %.5f", median(arr, n));

    free(arr);

    getch();
    return 0;
}
