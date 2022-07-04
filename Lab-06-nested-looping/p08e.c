/*
    Lab 6
    8.e) Write a program to print the following pattern:
         # # # # * 
         # # # * *
         # # * * *
         # * * * *
         * * * * *
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    printf("C program to print a pattern\n\n");

    for (int i = 0; i < 5; i++)
    {
        // printing '# '
        for (int j = i; j < 4; j++)
            printf("# ");

        // printing '* '
        for (int k = 0; k <= i; k++)
            printf("* ");

        printf("\n");
    }

    getch();
    return 0;
}
