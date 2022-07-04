/*
    Lab 6
    1.  Write a program to print the multiplication tables of m to n. Read the values of m and n from the user.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int m, n;

    printf("C program to display the multiplication tables from m to n\n\n");

    printf("Enter the value of m: ");
    scanf("%d", &m);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = m; i <= n; i++)
    {
        printf("\nMultiplication table of %d:\n", i);
        for (int j = 1; j < 11; j++)
            printf("%d x %2d = %d\n", i, j, i * j);
    }

    getch();
    return 0;
}
