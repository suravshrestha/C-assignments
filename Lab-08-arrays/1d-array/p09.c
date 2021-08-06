/*
    Lab 8
    1D array
    9.  Write a program to read an array of numbers and find the Standard Deviation and Variance of those number.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

float standard_deviation(float arr[], int n)
{
    float sum_x = 0.0;  // summation x
    float sum_x2 = 0.0; // summation x^2

    for (int i = 0; i < n; i++)
    {
        sum_x += arr[i];
        sum_x2 += arr[i] * arr[i];
    }

    float result = sqrt(sum_x2 / n - pow((sum_x / n), 2));

    return result;
}

int main()
{
    printf("C program to find the Standard Deviation and Variance of an array of numbers of size n\n\n");

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    float arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%f", &arr[i]);
    }

    printf("\nThe entered numbers:\n");
    for (int i = 0; i < n; i++)
        printf("%.2f ", arr[i]);

    float sd = standard_deviation(arr, n);
    float variance = sd * sd;

    printf("\nStandard Deviation = %f\n", sd);
    printf("Variance = %f", variance);

    getch();
    return 0;
}
