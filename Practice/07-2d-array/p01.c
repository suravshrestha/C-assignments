/*
    Practice
    2D array
    1.  Write a program to find the transpose of a matrix of integers.
*/

#include <stdio.h>
#include <conio.h>

void transpose(int rows, int cols, int matrix[][cols])
{
    // the transposed matrix has the rows and columns interchanged of the original matrix
    int transposed_matrix[cols][rows];

    // store the transposed matrix in the 2d array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            transposed_matrix[j][i] = matrix[i][j];
    }

    // display the transposed matrix
    printf("\nThe transposed matrix is:");
    for (int i = 0; i < cols; i++)
    {
        printf("\n");
        for (int j = 0; j < rows; j++)
            printf("%d\t", transposed_matrix[i][j]);
    }
}

int main()
{
    int rows, cols;

    printf("C program to find the transpose of a matrix\n\n");

    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);

    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("\nEnter the values for the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter the value of a[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // cols must be passed before the 2D array
    transpose(rows, cols, matrix);

    getch();
    return 0;
}
