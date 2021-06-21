/*
    Lab 5
    6.  Write a program to read a positive integer and display the first n Fibonacci numbers
        Fibonacci numbers: 0, 1, 1, 2, 3, 5, 8,...
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    int a = 0, b = 1, c;

    printf("C program to display the first n Fibonacci numbers\n");

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0)
        printf("Invalid input");
    else
    {
        printf("\nFirst %d Fibonacci numbers:\n", n);

        printf("%d ", a);

        for (int i = 1; i < n; i++)
        {
            printf("%d ", b);
            c = a + b;
            a = b;
            b = c;
        }
    }

    getch();
    return 0;
}
