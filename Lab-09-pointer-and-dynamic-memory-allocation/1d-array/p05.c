/*
    Lab 9
    Pointer and Dynamic memory allocation
    1D array
    5.  Write a program to read an array of numbers of size n, and cube each element of the array.
        Read the value of n from the user and display the final array.
        Use pointer and Dynamic memory allocation.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    printf("C program to cube each element of an array of numbers of size n\n\n");

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    float *arr = malloc(n * sizeof(float));
    float *final_arr = malloc(n * sizeof(float));

    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%f", arr + i);
    }

    for (i = 0; i < n; i++)
        *(final_arr + i) = pow(*(arr + i), 3);

    printf("\nEntered array of numbers:\n");
    for (i = 0; i < n; i++)
        printf("%.2f ", *(arr + i));

    printf("\n\nFinal array of numbers:\n");
    for (i = 0; i < n; i++)
        printf("%.2f ", *(final_arr + i));

    free(arr);
    free(final_arr);

    getch();
    return 0;
}
