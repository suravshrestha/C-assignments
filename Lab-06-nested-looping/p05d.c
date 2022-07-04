/*
    Lab 6
    5.d) Write a program to display the following sequence:
         (1^2 + 2^2)/ 2, (2^2 + 3^2)/ 3, (3^2 + 4^2)/ 4,... upto n terms
*/

#include <stdio.h>
#include <conio.h>

int main()

{
    int n;

    printf("C program to display following sequence:\n"
           "(1^2 + 2^2)/ 2, (2^2 + 3^2)/ 3, (3^2 + 4^2)/ 4,... upto n terms\n\n");

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("\nThe sequence upto %d terms\n", n);

    // the exact sequence
    for (int i = 1; i <= n; i++)
        printf("(%d^2 + %d^2)/ %d, ", i, i + 1, i + 1);

    // simplifying the sequence
    printf("\n\nSimplified sequence:\n");
    for (int i = 1; i <= n; i++)
        printf("%d/ %d, ", i * i + (i + 1) * (i + 1), i + 1);

    getch();
    return 0;
}
