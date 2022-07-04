/*
    Lab 6
    5.a) Write a program to display the following sequence:
         1, 2, 3, 4, 5, 6... upto n terms
*/

#include <stdio.h>
#include <conio.h>

int main()

{
    int n;

    printf("C program to display following sequence upto n terms:\n"
           "1, 2, 3, 4, 5, 6... upto n terms\n\n");

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("\nThe sequence upto %d terms\n", n);

    for (int i = 1; i <= n; i++)
        printf("%d, ", i);

    getch();
    return 0;
}
