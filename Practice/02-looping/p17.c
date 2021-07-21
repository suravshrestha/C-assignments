/*
    Practice
    17. Write a program to enter an integer, and find sum of the digits until the sum becomes single digit.
        If user enters 1729, 1 + 7 + 2 + 9 = 19 -> 1 + 9 = 10 -> 1 + 0 = 1
        Result = 1
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    unsigned int num, num_copy, rem, sum;

    printf("C program to find sum of digits of an integer until sum becomes single digit\n"
           "Example: 1729 -> 1 + 7 + 2 + 9 = 19 -> 1 + 9 = 10 -> 1 + 0 = 1\n"
           "         Result = 1\n\n");

    printf("Enter an integer: ");
    scanf("%u", &num);

    num_copy = num;

    do
    {
        sum = 0;
        do
        {
            rem = num_copy % 10;
            sum += rem;
            num_copy /= 10;
        } while (num_copy);
        num_copy = sum;
    } while (sum / 10); // single-digit check

    printf("\nEntered integer: %u\n", num);
    printf("Result = %u", sum);

    // // using goto statement
    // loop:
    //     while (num)
    //     {
    //         rem = num % 10;
    //         num /= 10;
    //         sum += rem;
    //     }

    //     if (sum >= 10)
    //     {
    //         num = sum;
    //         sum = 0;
    //         goto loop;
    //     }
    //     printf("Result = %u", sum);

    getch();
    return 0;
}
