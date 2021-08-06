/*
    Practice
    10. Write a program to read an integer and check if it is Armstrong or not.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h> // log10() pow()

int main()
{
    unsigned int num, num_copy, n_digits, digit;
    float sum = 0; // since it stores the value of floating type returned by pow()

    printf("C program to check whether an integer is Armstrong or not\n");

    printf("Enter a positive integer: ");
    scanf("%u", &num);

    n_digits = log10(num) + 1;

    num_copy = num;

    while (num_copy)
    {
        digit = num_copy % 10;
        sum += pow(digit, n_digits);
        num_copy /= 10;
    }

    if (sum == num)
        printf("%u is an Armstrong number.", num);
    else
        printf("%u is not an Armstrong number.", num);

    getch();
    return 0;
}
