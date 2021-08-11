/*
    Lab 8
    2D array
    2.  Write a program to add the corresponding elements of two array of numbers of size m x n. 
        Read the values of m and n from the user.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    printf("C program to add the corresponding elements of two array of numbers of size m x n\n\n");

    int m, n;
    printf("Enter the value of m: ");
    scanf("%d", &m);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    float arr1[m][n], arr2[m][n], final_arr[m][n];

    int i, j;

    printf("\nEnter the elements for the first 2D array:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter number: ");
            scanf("%f", &arr1[i][j]);
        }
    }

    printf("\nEnter the elements for the second 2D array:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter number: ");
            scanf("%f", &arr2[i][j]);
        }
    }

    // sum the corresponding elements
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            final_arr[i][j] = arr1[i][j] + arr2[i][j];
    }

    printf("\n\nFirst array of numbers:");
    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%.2f ", arr1[i][j]);
    }

    printf("\n\nSecond array of numbers:");
    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%.2f ", arr2[i][j]);
    }

    printf("\n\nFinal array of numbers:\n");
    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%.2f ", final_arr[i][j]);
    }
    getch();
    return 0;
}
