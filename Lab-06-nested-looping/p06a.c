/*
    Lab 6
    6.a) Write a program to evaluate the following series:
         2 + 4 + 6 + 8 + 10 + 12 +... upto n terms
*/

#include <stdio.h>
#include <conio.h>

int main()

{
    int n, sum = 0;

    printf("C program to evaluate the following series:\n"
           "2 + 4 + 6 + 8 + 10 + 12 +... upto n terms\n\n");

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("\nThe series upto %d terms\n", n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d + ", 2 * i);
        sum += 2 * i;
    }

    printf("\nSum = %d", sum);

    getch();
    return 0;
}
