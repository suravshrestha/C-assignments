/*
    Lab 8
    2D array
    1.  Write a program to find the sum of elements of an integer array of size 3x3 which are divisible by 7 but not by 5
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    printf("C program to find the sum of integers of an array of size 3x3 which are divisible by 7 but not by 5\n\n");

    int arr[3][3];
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter integer: ");
            scanf("%d", &arr[i][j]);

            if (arr[i][j] % 7 == 0 && arr[i][j] % 5 != 0)
                sum += arr[i][j];
        }
    }

    printf("\nSum = %d", sum);

    getch();
    return 0;
}
