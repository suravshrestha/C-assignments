/*
    Lab 3
    8.  Write a program for reading mixed data type in a single line.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 12345;
    float pi = 3.14159;
    char ch = 'a';
    char name[50] = "Dennis Ritchie";

    printf("C program to show mixed data type printing in a single line\n");

    printf("i = %4d\npi = %12.3f\nch = %-2c\nstr = %6s", i, pi, ch, name);

    getch();
    return 0;
}
