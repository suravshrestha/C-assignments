/*
    Lab 9
    Pointer and Dynamic memory allocation
    1D array
    10. Write a program to read an array of size 10 of type float, pass the array to a function. This function finds the largest and smallest number in the array.
        Display the largest and smallest number, their indices in the array, as well as the sum and difference between them in the main function. Use pass by reference.
        Use pointer notation for arrays and Dynamic memory allocation.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void find_highest_lowest(float arr[], float *max, float *min, int *max_idx, int *min_idx)
{
    *max = *arr;
    *min = *arr;

    *max_idx = 0;
    *min_idx = 0;
    for (int i = 1; i < 10; i++)
    {
        if (*(arr + i) > *max)
        {
            *max_idx = i;
            *max = *(arr + i);
        }

        if (*(arr + i) < *min)
        {
            *min_idx = i;
            *min = *(arr + i);
        }
    }
}

int main()
{
    float *arr = malloc(10 * sizeof(float));

    float max, min;

    int max_idx, min_idx;

    printf("C program to use pass by reference with array and function\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Enter number: ");
        scanf("%f", arr + i);
    }

    find_highest_lowest(arr, &max, &min, &max_idx, &min_idx);

    printf("\nThe entered numbers:\n");
    for (int i = 0; i < 10; i++)
        printf("%.2f ", *(arr + i));

    printf("\n\nLargest number: %.5f\n", max);
    printf("Index of the first largest number = %d\n\n", max_idx);

    printf("Smallest number: %.5f\n", min);
    printf("Index of the first smallest number = %d\n\n", min_idx);

    printf("%.2f + %.2f = %.2f\n", max, min, max + min);
    printf("%.2f - %.2f = %.2f", max, min, max - min);

    free(arr);

    getch();
    return 0;
}
