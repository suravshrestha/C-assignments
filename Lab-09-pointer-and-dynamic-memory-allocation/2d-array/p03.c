/*
    Lab 9
    Pointer and Dynamic memory allocation
    2D array
    3.  Write a program to find the largest and smallest element of an array of numbers of size 3 x 3.
        Use pointer notation for arrays and Dynamic memory allocation.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    printf("C program to find the largest and smallest element of a matrix of size 3x3\n\n");

    float **arr = malloc((3 * 3) * sizeof(float));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter number: ");
            scanf("%f", *(arr + i) + j);
        }
    }

    float min = **(arr); //  arr[0][0]
    float max = **(arr);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (*(*(arr + i) + j) < min)
                min = *(*(arr + i) + j);
            else if (*(*(arr + i) + j) > max)
                max = *(*(arr + i) + j);
        }
    }

    printf("\nLargest number = %.2f", max);
    printf("\nSmallest number = %.2f", min);

    free(arr);

    return 0;
}
