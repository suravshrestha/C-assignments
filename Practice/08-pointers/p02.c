/*
    Practice
    Pointers
    2.  Write a program to find the largest and smallest element of an array of integers
        using the concept of pointer and function.
*/

#include <stdio.h>
#include <conio.h>

void find_min_max(int arr[], int len, int *p, int *q)
{
    // *arr dereferences the variable pointed by arr
    // i.e. a[0]
    *p = *q = *arr;

    for (int i = 1; i < len; i++)
    {
        // *(arr + i) dereferences the variable pointed by (arr + i)
        // i.e. a[i]
        if (*(arr + i) > *p)
            *p = *(arr + i);

        if (*(arr + i) < *q)
            *q = *(arr + i);
    }
}

int main()
{
    printf("C program to find the largest and smallest element of an array of integers\n\n");

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], max, min;

    printf("\n");

    // read integers
    for (int i = 0; i < n; i++)
    {
        printf("Enter an integer: ");
        // the array name arr points to the first element of the array, an integer (i)
        // added to the array advances the pointer i steps in forward direction
        scanf("%d", arr + i);
    }

    find_min_max(arr, n, &min, &max);

    // now, the values pointed by pointer variables p and q have changed
    // (i.e. the values of max and min have changed)

    printf("\nLargest = %d\n", max);
    printf("Smallest = %d\n", min);

    return 0;
    getch();
}
