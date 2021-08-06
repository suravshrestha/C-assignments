/*
    Lab 8
    1D array
    1.  Write a program to find the sum of elements of an integer array of size 5 which are divisible by 10 but not by 15
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    printf("C program to find the sum of integers of an array of 5 elements which are divisible by 10 but not by 15\n\n");

    int arr[5];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter integer: ");
        scanf("%d", &arr[i]);

        if (arr[i] % 10 == 0 && arr[i] % 15 != 0)
            sum += arr[i];
    }

    printf("\nSum = %d", sum);

    getch();
    return 0;
}
