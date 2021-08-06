/*
    Lab 8
    1D array
    2.  Write a program to add the corresponding elements of two array of numbers of size n. 
        Read the value of n from the user.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    printf("C program to add the corresponding elements of two arrays of size n\n\n");

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    float arr1[n], arr2[n], final_arr[n];

    int i;

    printf("\nEnter the elements for the first array:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%f", &arr1[i]);
    }

    printf("\nEnter the elements for the second array:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%f", &arr2[i]);
    }

    // sum the corresponding elements
    for (i = 0; i < n; i++)
        final_arr[i] = arr1[i] + arr2[i];

    printf("\n\nFirst array of numbers:\n");
    for (i = 0; i < n; i++)
        printf("%.2f ", arr1[i]);

    printf("\n\nSecond array of numbers:\n");
    for (i = 0; i < n; i++)
        printf("%.2f ", arr2[i]);

    printf("\n\nFinal array of numbers:\n");
    for (i = 0; i < n; i++)
        printf("%.2f ", final_arr[i]);

    getch();
    return 0;
}
