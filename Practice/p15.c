/*
    Practice
    15. Write a program to display the chessboard pattern, use "\xdb" for white square.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    printf("C program to display the chessboard pattern\n");

    for (int i = 0; i < 8; i++)
    {
        printf("\n");

        // \x indicates a hexadecimal character escape. It is used for characters in hexadecimal code.
        // the code after \x is hexadecimal code, whose decimal equivalent's ascii character is displayed
        // the decimal equivalent of hexadecimal 'db' is 219, whose ascii character is a vertical rectangle
        for (int j = 0; j < 8; j++)
        {
            if ((i + j) % 2 == 0)
                printf("\xdb"); // rectangle representing white square
            else
                printf(" "); // whitespace representing black square
        }
    }

    return 0;
}
