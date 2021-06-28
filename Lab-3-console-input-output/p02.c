/*
    Lab 3
    2.  Write a program to read a character and a string using scanf() and display using printf()
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    char c, s[100];

    printf("C program to console character and string input\n");

    printf("Enter a character: ");
    scanf(" %c", &c);

    /*
        The ‘%s’ conversion matches a string of non-whitespace characters. 
        It skips and discards initial whitespace, but stops when it encounters more whitespace after having read something.
        It stores a null character at the end of the text that it reads.
        if we want to read string with multiple spaces, we use gets(), example in Lab-3-console-input-output p02.c
    */
    printf("Enter a string: ");
    scanf("%s", s);

    printf("\nEntered character: %c\n", c);
    printf("Entered string: %s", s);

    getch();
    return 0;
}
