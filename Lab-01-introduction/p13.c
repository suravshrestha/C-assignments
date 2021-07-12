/*
    Lab 1
    13. Write a program to read a character and display it.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    char a;

    printf("C program to enter a character and display it\n");
    
    /*
        it is recommended to put a space before %c
        if there are no other statments after the character input, then space is not necessary,
        else space is recommended. If we don't put a space, we will get undesired output.
    */
    printf("Enter a character: ");
    scanf(" %c", &a);

    printf("The entered character is %c", a);

    getch();
    return 0;
}
