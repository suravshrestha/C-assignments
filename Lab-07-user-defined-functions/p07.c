/*
    Lab 7
    7.  Write a program to read three integers from the user find the greatest and lowest integer among them.
        Create two functions for the two operations and print the result in main function.
        Use conditional operator to find the greatest and lowest integer.
*/

#include <stdio.h>
#include <conio.h>

int lowest(int a, int b, int c)
{
    return (a < b && a < c) ? a : ((b < a && b < c) ? b : c);
}

int greatest(int a, int b, int c)
{
    return (a > b && a > c) ? a : ((b > a && b > c) ? b : c);
}

int main()
{
    int a, b, c;

    printf("C program to find the greatest and lowest integer among three given integers\n\n");

    printf("Enter any three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("\nLowest integer = %d\n", lowest(a, b, c));
    printf("Greatest integer = %d", greatest(a, b, c));

    getch();
    return 0;
}
