/*
    Lab 8
    2D array
    3.  Write a program to find the largest and smallest element of an array of numbers of size 3 x 3.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    printf("C program to find the largest and smallest element of a matrix of size 3x3\n\n");

    float arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter number: ");
            scanf("%f", &arr[i][j]);
        }
    }

    float min = arr[0][0], max = arr[0][0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] < min)
                min = arr[i][j];
            else if (arr[i][j] > max)
                max = arr[i][j];
        }
    }

    printf("\nLargest number = %.2f", max);
    printf("\nSmallest number = %.2f", min);

    getch();
    return 0;
}
