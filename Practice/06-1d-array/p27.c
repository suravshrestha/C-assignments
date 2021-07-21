/*
    Practice
    27. Write a program to find the largest number of an array of numbers.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    float max;

    printf("C program to find the largest number of an array\n\n");

    printf("Enter the value of n: ");
    scanf("%d", &n);

    float arr[n];

    // number input
    for (int i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%f", &arr[i]);
    }

    // number comparison
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    printf("Largest number = %f", max);

    getch();
    return 0;
}
