/*
    Lab 9
    Pointer and Dynamic memory allocation
    2D array
    1.  Write a program to find the sum of elements of an integer array of size 3x3 which are divisible by 7 but not by 5.
        Use pointer notation for arrays and Dynamic memory allocation.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    printf("C program to find the sum of integers of an array of size 3x3 which are divisible by 7 but not by 5\n\n");

    // int arr[3][3];
    int **arr = malloc((3 * 3) * sizeof(int));

    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter integer: ");
            scanf("%d", *(arr + i) + j); // &arr[i][j]

            if (*(*(arr + i) + j) % 7 == 0 && *(*(arr + i) + j) % 5 != 0)
                sum += *(*(arr + i) + j); // arr[i][j]
        }
    }

    printf("\nSum = %d", sum);

    // dynamically deallocate the memory (free the memory) consumed by arr
    free(arr);

    return 0;
}
