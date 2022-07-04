/*
    Lab 6
    2.  Write a program to print the chessboard pattern.
        [Hint: print "/xdb" for white color and "*" for black color]
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    printf("C program to display the chessboard pattern\n");

    for (int i = 0; i < 8; i++)
    {
        printf("\n");
        for (int j = 0; j < 8; j++)
        {
            if ((i + j) % 2 == 0)
                printf("\xdb");
            else
                printf(" ");
        }
    }

    return 0;
}
