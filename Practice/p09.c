/*
    Practice
    9.  Write a program to read an integer and check if it is palindrome or not.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    unsigned int num, num_copy, digit;
    int reverse = 0;

    printf("C program to check whether an integer is Palindrome or not\n");

    printf("Enter a positive integer: ");
    scanf("%u", &num);

    num_copy = num;

    while (num_copy)
    {
        digit = num_copy % 10;
        reverse = reverse * 10 + digit;
        num_copy /= 10;
    }

    if (reverse == num)
        printf("%u is a Palindrome number.", num);
    else
        printf("%u is not a Palindrome number.", num);

    getch();
    return 0;
}
