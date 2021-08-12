/*
    Lab 9
    Pointer and Dynamic memory allocation
    1D array
    1.  Write a program to find the sum of elements of an integer array of size 5 which are divisible by 10 but not by 15
        Use pointer notation for arrays and Dynamic memory allocation.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    printf("C program to find the sum of integers of an array of 5 elements which are divisible by 10 but not by 15\n\n");

    // int arr[5];
    int *arr = malloc(5 * sizeof(int));

    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter integer: ");
        scanf("%d", arr + i); // &arr[i]

        if (*(arr + i) % 10 == 0 && *(arr + i) % 15 != 0)
            sum += *(arr + i); // arr[i]
    }

    printf("\nSum = %d", sum);

    // dynamically deallocate the memory (free the memory) consumed by arr
    free(arr);

    getch();
    return 0;
}
