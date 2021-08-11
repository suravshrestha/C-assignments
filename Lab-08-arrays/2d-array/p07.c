/*
    Lab 8
    2D array
    7.  Write a program to find the sum of individual rows of a 2d array of size m x n and assign them to a 1D array and display the content of the 1D array.
        Read the values of m and n from the user.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    printf("C program to sum the individual rows of a matrix of size m x n\n\n");

    int m, n;

    printf("Enter the value of m: ");
    scanf("%d", &m);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    float arr[m][n], final_arr[m];

    int i, j;

    printf("\nEnter the numbers for the matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter number: ");
            scanf("%f", &arr[i][j]);
        }
    }

    printf("\nMatrix:");
    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%f\t", arr[i][j]);
    }

    for (i = 0; i < m; i++)
    {
        final_arr[i] = 0;
        for (j = 0; j < n; j++)
            final_arr[i] += arr[i][j];
    }

    printf("\n\nFinal array of numbers:\n");
    for (i = 0; i < m; i++)
    {
        printf("%.2f\t", final_arr[i]);
    }

    getch();
    return 0;
}
