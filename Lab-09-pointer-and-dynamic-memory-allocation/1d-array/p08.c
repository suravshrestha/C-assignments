/*
    Lab 9
    Pointer and Dynamic memory allocation
    1D array
    8.  Write a program to read an array of numbers and find the range of those number.
        Use pointer notation for arrays and Dynamic memory allocation.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    printf("C program to find the range of an array of numbers\n\n");

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    float *arr = malloc(n * sizeof(float));

    for (int i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%f", arr + i);
    }

    float max = *arr;
    float min = *arr;
    for (int i = 1; i < n; i++)
    {
        if (*(arr + i) > max)
            max = *(arr + i);
        else if (*(arr + i) < min)
            min = *(arr + i);
    }

    printf("\nThe entered numbers:\n");
    for (int i = 0; i < n; i++)
        printf("%.2f ", *(arr + i));

    printf("\nRange = %.5f", max - min);

    free(arr);

    getch();
    return 0;
}
