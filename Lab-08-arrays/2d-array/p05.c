/*
    Lab 8
    2D array
    5.  Write a program to read an array of numbers of size m x n, and raise each element by power 5.
        Read the values of m and n from the user and display the final array.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    printf("C program to raise each element of 2D array of numbers of size m x n by power 5\n\n");

    int m, n;

    printf("Enter the value of m: ");
    scanf("%d", &m);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    float arr[m][n], final_arr[m][n];

    int i, j;

    printf("\nEnter the values for the 2D array\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter number: ");
            scanf("%f", &arr[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            final_arr[i][j] = pow(arr[i][j], 5.0);
    }

    printf("\nEntered array of numbers:");
    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%.2f\t", arr[i][j]);
    }

    printf("\n\nFinal array of numbers:");
    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%.2f\t\t", final_arr[i][j]);
    }

    getch();
    return 0;
}
