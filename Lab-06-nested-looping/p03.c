/*
    Lab 6
    3.  Write a program to read two integers a and b (both positive, and a<b) from the user.
        Display the prime and palindrome numbers between a and b, and their counts also.
*/

#include <stdio.h>
#include <conio.h>

int main()

{
    int a, b;
    int prime_count = 0, palindrome_count = 0;

    printf("C program to display the prime and palindrome numbers between a and b\n\n");

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Prime numbers
    printf("\nPrime numbers:\n");
    for (int i = a + 1; i < b; i++) // exclude the numbers a and b
    {
        int factors = 2; // 1 and the number itself
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                factors += 1;
                break;
            }
        }

        if (factors == 2)
        {
            printf("%d ", i);
            prime_count += 1;
        }
    }

    // Palindrome numbers
    printf("\n\nPalindrome numbers:\n");
    for (int i = a + 1; i < b; i++) // exclude the numbers a and b
    {
        int reverse = 0;
        int i_copy = i;
        while (i_copy)
        {
            int digit = i_copy % 10;
            reverse = reverse * 10 + digit;
            i_copy /= 10;
        }

        if (reverse == i)
        {
            printf("%d ", i);
            palindrome_count += 1;
        }
    }

    printf("\n\nTotal prime numbers between %d and %d:", a, b);
    printf("\nPrime numbers: %d", prime_count);
    printf("\nPalindrome numbers: %d", palindrome_count);

    getch();
    return 0;
}
