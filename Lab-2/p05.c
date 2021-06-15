/*
    Lab 2
    5.  Write a program to enter float, character, long integer and unsigned integer datas from the user and display them. 
*/

#include <stdio.h>
#include <conio.h> //  for getch()

void main(void)
{
    float a;
    char b;
    long int c;
    unsigned int d;

    printf("Enter a number with decimal: ");
    scanf("%f", &a);

    printf("Enter a character: ");
    scanf(" %c", &b);

    printf("Enter a large integer: ");
    scanf("%ld", &c);

    printf("Enter a positive integer : ");
    scanf("%u", &d);

    printf("Floating data = %.2f\n", a);
    printf("Character = %c\n", b);
    printf("Long integer = %ld\n", c);
    printf("Postive integer = %u", d);

    getch();
}
