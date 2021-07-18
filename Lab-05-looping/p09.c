/*
    Lab 5
    9.  Write a program to read a positive integer and display its multiplication table.
*/

#include <conio.h>
#include <stdio.h>

int main()
{
    int num;

    printf("C program to print the multiplication table of a positive integer\n\n");

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 1)
        printf("Invalid input.");
    else
    {

        printf("\nMultiplication table of %d\n", num);

        for (int i = 1; i <= 10; i++)
            printf("%d x %2d = %d\n", num, i, num * i);
    }

    getch();
    return 0;
}
