/*
    Practice
    19. Write a program to read an integer and count the even and odd digits present in the integer.
        Use function for calculating the result, display the result in the main function.
*/

#include <stdio.h>
#include <conio.h>

int even_digits(unsigned int num)
{

    if (num == 0)
        return 1;

    int e_count = 0;
    unsigned int digit;

    while (num)
    {
        digit = num % 10;
        num /= 10;
        if (digit % 2 == 0)
            e_count += 1;
    }

    return e_count;
}

int odd_digits(unsigned int num)
{
    int o_count = 0;
    unsigned int digit;

    while (num)
    {
        digit = num % 10;
        num /= 10;
        if (digit % 2 != 0)
            o_count += 1;
    }

    return o_count;
}

int main()
{
    unsigned int num;

    printf("C program to find the number of even and odd digits in an integer\n");

    printf("Enter a positive integer: ");
    scanf("%u", &num);

    printf("\nEntered digit = %u\n", num);
    printf("Total even digits = %d\n", even_digits(num));
    printf("Total odd digits = %d", odd_digits(num));

    getch();
    return 0;
}