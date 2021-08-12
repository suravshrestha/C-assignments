/*
    Lab 9
    Pointer and Dynamic memory allocation
    1D array
    3.  Write a program to find the largest and smallest element of an array of numbers of size 5.
        Use pointer notation for arrays and Dynamic memory allocation.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    printf("C program to find the largest and smallest element of an array of numbers\n\n");

    float *arr = malloc(5 * sizeof(float));

    for (int i = 0; i < 5; i++)
    {
        printf("Enter number: ");
        scanf("%f", arr + i);
    }

    float min = *arr; // *(arr + 0) = arr[0]
    float max = *arr;

    for (int i = 1; i < 5; i++)
    {
        if (*(arr + i) < min)
            min = *(arr + i);
        else if (*(arr + i) > max)
            max = *(arr + i);
    }

    printf("\nLargest number = %.2f", max);
    printf("\nSmallest number = %.2f", min);

    free(arr);

    getch();
    return 0;
}
