/*
    Practice
    26. Write a program to find the avarage of n numbers of an one-dimensional array.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    float sum = 0;

    printf("C program to find the average of n numbers using array\n\n");

    printf("Enter the value of n: ");
    scanf("%d", &n);

    float arr[n];

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%f", &arr[i]);

        sum += arr[i];
    }

    printf("\nAverage = %f", sum / n);

    getch();
    return 0;
}
