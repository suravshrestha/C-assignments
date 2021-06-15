/*
    Lab 2
    1.  Write a program that inputs seconds as input and converts to minutes and seconds.
*/

#include <stdio.h>
#include <conio.h> //  for getch()

void main(void)
{
    int seconds, minutes;

    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);

    minutes = seconds / 60;
    seconds %= 60;

    getch();
}
