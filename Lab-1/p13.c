/*
    Lab 1
    13. Write a program to read a character and display it.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    char a;

    printf("Enter a character: ");
    scanf(" %c", &a);

    printf("The entered character is %c", a);

    getch();
    return 0;
}
