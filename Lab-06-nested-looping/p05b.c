/*
    Lab 6
    5.b) Write a program to display the following sequence:
         2, 4, 6, 8, 10, 12,... upto n terms
*/

#include <stdio.h>
#include <conio.h>

int main()

{
    int n;

    printf("C program to display following sequence:\n"
           "2, 4, 6, 8, 10, 12,... upto n terms\n\n");

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("\nThe sequence upto %d terms\n", n);

    for (int i = 1; i <= n; i++)
        printf("%d, ", 2 * i);

    getch();
    return 0;
}
