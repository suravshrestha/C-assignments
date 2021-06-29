/*
    Practice
    16. Write a program to read an integer and print the pattern. If user enters 5, the pattern is:
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
    int n;

    printf("C program to print pattern\n\n");

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("\n");
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
    }

    getch();
    return 0;
}
