/*
    Lab 6
    8.a) Write a program to print the following pattern:
         1
         1 2
         1 2 3
         1 2 3 4
         1 2 3 4 5
         
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    printf("C program to print a pattern\n\n");

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%d ", j);

        printf("\n");
    }

    getch();
    return 0;
}
