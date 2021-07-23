/*
    Practice
    2D array
    2.  Write a program to read a matrix of integers of size m x n. Pass it to a return type function.
        This function should add all the elements of the matrix and display the result in main.
*/

#include <stdio.h>
#include <conio.h>

float find_sum(int rows, int cols, float matrix[][cols])
{
    float sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            sum += matrix[i][j];
    }

    return sum;
}

int main()
{
    int rows, cols;

    printf("C program to find the sum of elements of a matrix\n\n");

    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);

    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &cols);

    float matrix[rows][cols];

    printf("\nEnter the values for the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter the value of matrix[%d][%d]: ", i, j);
            scanf("%f", &matrix[i][j]);
        }
    }

    // cols must be passed before the 2D array
    printf("\nThe sum of elements of the array is: %f", find_sum(rows, cols, matrix));

    getch();
    return 0;
}
