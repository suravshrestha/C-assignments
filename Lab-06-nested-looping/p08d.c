/*
    Lab 6
    8.d) Write a program to print the following pattern:
         A 
         A B
         A b C
         A B C D
         A b C d E
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    char string[] = "ABCDE";

    printf("C program to print a pattern\n\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i % 2 == 0 && j % 2 != 0)
                putchar(string[j] + 32);
                
            else
                putchar(string[j]);
        }

        printf("\n");
    }

    getch();
    return 0;
}
