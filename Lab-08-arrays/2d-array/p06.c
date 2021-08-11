/*
    Lab 8
    2D array
    6.  Write a program generate a matrix of size 4 x 4 whose elements are given by the expression:
        a(ij) = 3^-(i + j)
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    printf("C program to generate a matrix of size 4 x 4 given by the expression\na(ij) = 3^-(i + j)\n\n");

    float arr[4][4];

    int i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            arr[i][j] = pow(3.0, -(i + j + 2));
    }

    printf("Final array of numbers:");
    for (i = 0; i < 4; i++)
    {
        printf("\n");
        for (j = 0; j < 4; j++)
            printf("%f\t", arr[i][j]);
    }

    getch();
    return 0;
}
