/*
    Lab 6
    8.c) Write a program to print the following pattern:
         1 N 
         2 E E
         3 P P P
         4 A A A A
         5 L L L L L
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    char string[] = "NEPAL";

    printf("C program to print a pattern\n\n");

    for (int i = 1; i <= 5; i++)
    {
        printf("%d ", i);

        for (int j = 1; j <= i; j++)
            putchar(string[i - 1]);

        printf("\n");
    }

    getch();
    return 0;
}
