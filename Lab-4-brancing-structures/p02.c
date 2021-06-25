/*
    Lab 4
    2.  Write a program to read an integer and check whether it is positive, negative or zero.
        Display appropriate message on the screen.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int num;

    printf("C program to check whether the entered integer is positive, negative, or zero\n");

    printf("\nEnter an integer: ");
    scanf("%d", &num);

    if (num > 0)
        printf("%d is a positive integer.", num);
    else if (num < 0)
        printf("%d is a negative integer.", num);
    else
        printf("%d is neither positive, nor negative.");

    getch();
    return 0;
}
