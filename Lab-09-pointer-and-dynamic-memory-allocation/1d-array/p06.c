/*
    Lab 9
    Pointer and Dynamic memory allocation
    1D array
    6.  Write a program to read an unsigned integer array of size n. Pass it to a function which returns the number of Armstrong integers in the array. Read the value of n from the user.
        Use pointer notation for arrays and Dynamic memory allocation.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int number_of_armstrongs(unsigned int arr[], int n)
{
    int num, n_digits, num_copy, digit;
    float sum;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        num = *(arr + i);
        n_digits = (num == 0) ? 1 : (log10(num) + 1);
        sum = 0;
        num_copy = num;

        while (num_copy)
        {
            digit = num_copy % 10;
            sum += pow(digit, n_digits);
            num_copy /= 10;
        }

        if (sum == num)
            count++;
    }

    return count;
}

int main()
{
    printf("C program to find the number of Armstrong numbers in an array of integers of size n\n\n");

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    unsigned int *arr = malloc(n * sizeof(unsigned int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter positive integer: ");
        scanf("%u", arr + i);
    }

    printf("\nThe entered positive integers are:\n");
    for (int i = 0; i < n; i++)
        printf("%u ", *(arr + i));

    printf("\nArmstrong numbers: %d", number_of_armstrongs(arr, n));

    free(arr);

    getch();
    return 0;
}
