/*
    Lab 3
    9.  Write a program to use different format specifier for reading integer.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int i;

    printf("C program to show format specifier variation for integer input\n");

    printf("Enter an integer: ");
    scanf("%3d", &i); // read only the first 3 digits

    printf("The integer read is: %d", i);

    getch();
    return 0;
}
