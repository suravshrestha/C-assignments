/*
    Practice
    2D array
    3.  Write a program to add two matrices of integers using non-return type function.
        Display appropriate message if addition is not possible.
*/

#include <stdio.h>
#include <conio.h>

void add(int rows1, int cols1, int rows2, int cols2, int matrix1[][cols1], int matrix2[][cols2])
{
    // the sum matrix has the same number of rows and columns as the individual matrix
    int sum[rows1][cols1];

    // sum the adjacent elements
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }

    // print the result matrix
    printf("\nThe result matrix is:");
    for (int i = 0; i < rows1; i++)
    {
        printf("\n");
        for (int j = 0; j < cols1; j++)
            printf("%d\t", sum[i][j]);
    }
}

int main()
{
    int rows1, cols1, rows2, cols2;

    printf("C program to add two matrices\n\n");

    printf("Enter the number of rows in the first matrix: ");
    scanf("%d", &rows1);

    printf("Enter the number of columns in the first matrix: ");
    scanf("%d", &cols1);

    printf("\nEnter the number of rows in the second matrix: ");
    scanf("%d", &rows2);

    printf("Enter the number of columns in the second matrix: ");
    scanf("%d", &cols2);

    if (rows1 != rows2 || cols1 != cols2)
    {
        printf("\nMatrix addition not possible.");
        return 0;
    }

    int matrix1[rows1][cols1];
    int matrix2[rows2][cols2];

    printf("\nEnter the values for the first matrix:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            printf("Enter the value of matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nEnter the values for the second matrix:\n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("Enter the value of matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // cols1 and cols2 must be passed before the 2D array
    add(rows1, cols1, rows2, cols2, matrix1, matrix2);

    getch();
    return 0;
}
