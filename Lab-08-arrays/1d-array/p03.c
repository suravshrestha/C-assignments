/*
    Lab 8
    1D array
    3.  Write a program to find the largest and smallest element of an array of numbers of size 5.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    printf("C program to find the largest and smallest element of an array of numbers\n\n");

    float arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter number: ");
        scanf("%f", &arr[i]);
    }

    float min = arr[0], max = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        else if (arr[i] > max)
            max = arr[i];
    }

    printf("\nLargest number = %.2f", max);
    printf("\nSmallest number = %.2f", min);

    getch();
    return 0;
}
