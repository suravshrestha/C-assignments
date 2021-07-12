/*
    Lab 3
    1.  Write a program to read a character using getche() and getchar() and display using putch() or putchar()
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;

    printf("C program to show console character input and output\n");

    /*
        getchar() is defined in stdio.h header file
        getch and getche() are defined in conio.h header file
        both getche() and getchar() read a character 
        getche() doesn't wait for an enter key, while getchar() expects an enter key
        if multiple characters are entered, getchar() will read the first character only.

        putchar() is standard C function (defined in stdio.h header file) while putch() is not
        putch() is defined in the conio.h header file.
    */
    printf("With getchar():\n");
    printf("Enter a character: ");
    ch = getchar();

    printf("With putch():\n");
    printf("The entered character is: ");
    putch(ch);

    printf("\n\nWith getche():");
    printf("\nEnter another character: ");
    ch = getche();

    printf("\nWith putchar():");
    printf("\nThe entered character is: ");
    putchar(ch);

    // getch() is similar to getche(), they don't wait for an enter key
    getch();
    return 0;
}
