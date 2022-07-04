/*
    Lab 6
    8.b) Write a program to print the following pattern:
         5 4 3 2 1
         5 4 3 2
         5 4 3
         5 4
         5
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    printf("C program to print a pattern\n\n");

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
            printf("%d ", j);

        printf("\n");
    }

    getch();
    return 0;
}
