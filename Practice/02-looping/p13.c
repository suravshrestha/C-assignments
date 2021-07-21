/*
    Practice
    13. Write a program to display the binary equivalent of a decimal integer
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int num, num_copy, rem, result = 0, base = 1;

    printf("C program to find the binary equivalent of decimal integer\n\n");

    printf("Enter a decimal integer: ");
    scanf("%d", &num);

    num_copy = num;

    while (num_copy)
    {
        rem = num_copy % 2;
        result += rem * base;
        base *= 10;
        num_copy /= 2;
    }

    printf("Decimal number: %d\n", num);
    printf("Binary equivalent: %d", result);

    getch();
    return 0;
}
