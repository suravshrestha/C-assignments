/*
    Lab 6
    8.i) Write a program to print the following pattern:
               1 
             1 2 1
           1 2 3 2 1
         1 2 3 4 3 2 1
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int spaces = 6, a;

    printf("C program to print a pattern\n\n");

    for (int i = 1; i < 5; i++)
    {
        // for leading spaces
        for (int j = 0; j < spaces; j++)
            printf(" ");
        spaces -= 2;

        // for leftmost trianglular part
        for (int k = 1; k <= i; k++)
        {
            printf("%d ", k);
            a = k;
        }

        // now, a has the last value of the line of the leftmost triangle
        // for leftmost trianglular part
        for (a -= 1; a > 0; a--)
            printf("%d ", a);

        printf("\n");
    }

    // // General solution:
    // // Works for single-digit row
    // // alignment issue for multi-digit row
    // int rows, spaces, a;

    // printf("C program to print a pattern\n\n");

    // printf("Enter the number of rows: ");
    // scanf("%d", &rows);

    // spaces = 2 * rows - 2;

    // for (int i = 1; i <= rows; i++)
    // {
    //     // for leading spaces
    //     for (int j = 0; j < spaces; j++)
    //         printf(" ");
    //     spaces -= 2;

    //     // for leftmost trianglular part
    //     for (int k = 1; k <= i; k++)
    //     {
    //         printf("%d ", k);
    //         a = k;
    //     }

    //     // now, a has the last value of the line of the leftmost triangle
    //     // for leftmost trianglular part
    //     for (a -= 1; a > 0; a--)
    //         printf("%d ", a);

    //     printf("\n");
    // }

    getch();
    return 0;
}
