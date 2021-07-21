/*
    Practice
    14. Write a program to display the decimal equivalent of a binary number.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int num, num_copy, rem, exp = 0, result = 0;

    printf("C program to find the decimal equivalent of binary number\n\n");

    printf("Enter a binary number: ");
    scanf("%d", &num);

    num_copy = num;

    while (num_copy)
    {
        rem = num_copy % 10;
        result += rem * pow(2, exp);
        exp += 1;
        num_copy /= 10;
    }

    printf("Binary number: %d\n", num);
    printf("Decimal equivalent: %d", result);

    getch();
    return 0;
}
