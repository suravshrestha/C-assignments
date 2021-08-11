/*
    Lab 8
    2D array
    4.  Write a program to read an array of numbers of size 3x3 in main function. 
        Pass the array to a function that finds the sum of major diagonal elements using return type function.
*/

#include <stdio.h>
#include <conio.h>

float diag_sum(float arr[3][3])
{
    float sum = 0;

    for (int i = 0; i < 3; i++)
        sum += arr[i][i];

    return sum;
}

int main()
{
    printf("C program to find the sum of major diagonal elements of a matrix of size 3 x 3\n\n");

    float arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter number: ");
            scanf("%f", &arr[i][j]);
        }
    }

    printf("\nThe matrix:");
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
            printf("%f\t", arr[i][j]);
    }

    printf("\n\nSum of diagonal elements = %.2f", diag_sum(arr));

    getch();
    return 0;
}
