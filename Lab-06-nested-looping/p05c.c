/*
    Lab 6
    5.c) Write a program to display the following sequence:
         1, 2, 5, 10, 17, 26,... upto n terms
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int n;

    printf("C program to display following sequence:\n"
           "1, 2, 5, 10, 17, 26,... upto n terms\n\n");

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("\nThe sequence upto %d terms\n", n);

    for (int i = 0; i < n; i++)
        printf("%d, ", i * i + 1);

    // // Alternative
    // int a = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     printf("%d, ", a);
    //     a += 2 * i - 1;
    // }

    getch();
    return 0;
}
