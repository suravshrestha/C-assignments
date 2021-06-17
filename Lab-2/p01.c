/*
    Lab 2
    1.  Write a program that inputs seconds as input and converts to minutes and seconds.
*/

#include <stdio.h>
#include <conio.h> //  for getch()

void main(void)
{
    int seconds, minutes;

    printf("C program to read the number of seconds, and convert it to minutes, and seconds.\n");

    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);

    minutes = seconds / 60;

    // % (modulo operator) is an arithmetic operator which gives the remainder after division
    printf("%ds = %d minutes %d seconds", seconds, minutes, seconds % 60);

    getch();
}
