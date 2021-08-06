/*
    Lab 8
    1D array
    5.  Write a program to read an array of numbers of size n, and cube each element of the array.
        Read the value of n from the user and display the final array.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    printf("C program to cube each element of an array of numbers of size n\n\n");

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    float arr[n], final_arr[n];

    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%f", &arr[i]);
    }

    for (i = 0; i < n; i++)
        final_arr[i] = arr[i] * arr[i] * arr[i];

    printf("\nEntered array of numbers:\n");
    for (i = 0; i < n; i++)
        printf("%.2f ", arr[i]);

    printf("\n\nFinal array of numbers:\n");
    for (i = 0; i < n; i++)
        printf("%.2f ", final_arr[i]);

    getch();
    return 0;
}
