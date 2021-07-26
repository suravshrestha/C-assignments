/*
    Practice
    String
    1.  Write a program to display the following pattern:
        N
        Ne
        Nep
        Nepa
        Nepal
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    printf("C program to display a pattern\n");

    char string[] = "Nepal";

    for (int i = 0; i < 5; i++)
    {
        printf("\n");
        for (int j = 0; j <= i; j++)
            printf("%c", string[j]);
    }

    getch();
    return 0;
}
