/*
    Lab 5
    8.  Write a program to read a positive integer and check if it
        Palindrome, Armstrong, prime, or twin prime.
*/

#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int num, num_copy, digit, n_digits;
    int reverse = 0, sum = 0, factors = 2;
    int is_palidrome = 0, is_armstrong = 0, is_prime = 0, is_twin_prime = 0;

    printf("C program to check whether a number is Palindrome, Armstrong, prime or twin prime\n");

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Invalid input.");
        return 0;
    }

    n_digits = (num == 0) ? 1 : (log10(num) + 1);

    // Palindrome check
    num_copy = num;

    while (num_copy)
    {
        digit = num_copy % 10;
        reverse = reverse * 10 + digit;
        num_copy /= 10;
    }

    if (reverse == num)
        is_palidrome = 1;

    // Armstrong check
    num_copy = num;

    while (num_copy)
    {
        digit = num_copy % 10;
        sum += pow(digit, n_digits);
        num_copy /= 10;
    }

    if (sum == num)
        is_armstrong = 1;

    // prime check
    if (!(num < 2)) // 0 and 1 are not prime
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                factors += 1;
                break;
            }
        }

        if (factors == 2)
        {
            is_prime = 1;

            // twin  prime check
            // only the numbers which are prime can be twin prime

            // for number 2 greater than the entered number
            factors = 2;
            for (int i = 2; i < num - 2; i++)
            {
                if (num % i == 0)
                {
                    factors += 1;
                    break;
                }
            }

            if (factors == 2)
                is_twin_prime = 1;

            else
            {
                // for number 2 greater than the entered number
                factors = 2;
                for (int i = 2; i < num + 2; i++)
                {
                    if (num % i == 0)
                    {
                        factors += 1;
                        break;
                    }
                }

                if (factors == 2)
                    is_twin_prime = 1;
            }
        }
    }

    if (is_palidrome == 0 && is_armstrong == 0 && is_prime == 0 && is_twin_prime == 0)
        printf("%d is neither of the four.", num);
    else
    {
        printf("%d is", num);
        if (is_palidrome)
            printf(" Palindrome");

        if (is_armstrong)
            printf(" Armstrong");

        if (is_prime)
            printf(" prime");

        if (is_twin_prime)
            printf(" twin-prime");
    }

    getch();
    return 0;
}
