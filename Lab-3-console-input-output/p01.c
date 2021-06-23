/*
    Lab 3
    1.  Write a program to read a character using getche() and getchar() and display using putch() or putche()
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;

    printf("C program to show console character input\n");

    /*
        getch(), getche and getchar() are defined in conio.h header file
        both getche() and getchar() read a character 
        getche() doesn't wait for an enter key, while getchar() expects an enter key
        if multiple characters are entered, getchar() will read the first character only.
    */
    printf("With getchar():\n");
    printf("Enter a character: ");
    ch = getchar();
    printf("The entered character is: %c", ch);

    printf("\n\nWith getche():");
    printf("\nEnter another character: ");
    ch = getche();
    printf("\nThe entered character is: %c", ch);

    // getch() is similar to getche(), they don't wait for an enter key
    getch();
    return 0;
}
