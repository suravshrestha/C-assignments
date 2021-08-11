/*
    Lab 8
    2D array
    8.  Write a program that reads two matrices of order m x n and p x q using function read_matrix().
        Create another function process_matrix() that multiplies the two matrices. The result matrix must be displayed using a function show_matrix().
        Read the values of m, n, p and q from the user.
*/

#include <stdio.h>
#include <conio.h>

void read_matrix(int m, int n, int p, int q, float matrix1[][n], float matrix2[][q])
{
    printf("\nEnter the values for first matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the value of matrix1[%d][%d]: ", i, j);
            scanf("%f", &matrix1[i][j]);
        }
    }

    printf("\nEnter the values for second matrix:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("Enter the value of matrix2[%d][%d]: ", i, j);
            scanf("%f", &matrix2[i][j]);
        }
    }
}

void process_matrix(int m, int n, int p, int q, float matrix1[][n], float matrix2[][q], float result_matrix[][q])
{
    // matrix multiplication
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            result_matrix[i][j] = 0;
            for (int k = 0; k < p; k++)
            {
                result_matrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void show_matrix(int m, int q, float result_matrix[][q])
{
    printf("\nThe final matrix is:");
    for (int i = 0; i < m; i++)
    {
        printf("\n");
        for (int j = 0; j < q; j++)
            printf("%f\t", result_matrix[i][j]);
    }
}

int main()
{
    printf("C program to perform matrix multiplication of two matrices of order m x n and p x q\n\n");

    int m, n, p, q;

    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("\nEnter the value of p: ");
    scanf("%d", &p);
    printf("Enter the value of q: ");
    scanf("%d", &q);

    /*
        Order of matrices:
        A -> m x n
        B -> p x q
        For A x B to exist, p = n
        A x B -> m x q
    */

    if (n == p)
    {
        float matrix1[m][n], matrix2[p][q];
        float result_matrix[m][q];

        read_matrix(m, n, p, q, matrix1, matrix2);

        process_matrix(m, n, p, q, matrix1, matrix2, result_matrix);

        show_matrix(m, q, result_matrix);
    }
    else
    {
        printf("\nMatrix multiplication not possible.");
    }

    return 0;
}
