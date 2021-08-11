/*
    Lab 7
    6.  Write a program to read an unsigned integer in main() and pass it to void function counts_digits(int*, int*)
        This function counts the number of odd and even digits in that integer. 
        Display the counts from main. Use concept of passing arguments by reference.
*/

#include <stdio.h>
#include <conio.h>

void count_digits(unsigned int num, int *even_digits, int *odd_digits)
{
    int digit;

    if (num == 0)
        *even_digits = 1;

    while (num)
    {
        digit = num % 10;

        if (digit % 2 == 0)
            *even_digits += 1;
        else
            *odd_digits += 1;

        num /= 10;
    }
}

int main()
{
    unsigned int num;

    int even_digits = 0, odd_digits = 0;

    printf("C program to find the number of even and odd digits in an integer\n\n");

    printf("Enter a positive integer: ");
    scanf("%u", &num);

    count_digits(num, &even_digits, &odd_digits);

    printf("\nEntered integer = %u\n", num);
    printf("\nNumber of even digits = %d", even_digits);
    printf("\nNumber of odd digits = %d", odd_digits);

    getch();
    return 0;
}
