/*
    Lab 6
    5.e) Write a program to display the following sequence:
         1, 1/3, 1/5, 1/7, 1/9, 1/11,... upto n terms
*/

#include <stdio.h>
#include <conio.h>

int main()

{
    int n;

    printf("C program to display following sequence:\n"
           "1, 1/3, 1/5, 1/7, 1/9, 1/11,... upto n terms\n\n");

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("\nThe sequence upto %d terms\n", n);

    for (int i = 1; i <= n; i++)
        printf("1/ %d, ", 2 * i - 1);

    getch();
    return 0;
}
