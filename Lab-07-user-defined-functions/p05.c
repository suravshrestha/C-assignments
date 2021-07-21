/*
    Lab 7
    5.  Combine problems 1 to 4 using switch statement. Ask the user for the option, and display appropriate output.
        Make separate functions for each operation.
*/

#include <stdio.h>
#include <conio.h>

float add(int a, float b)
{
    return a + b;
}

void sum_of_digits(int num)
{
    int sum = 0;
    int num_copy, digit;

    num_copy = num;

    while (num_copy)
    {
        digit = num_copy % 10;
        sum += digit;
        num_copy /= 10;
    }

    printf("The sum of digits of the number %d is %d", num, sum);
}

// using non-recursive algorithm
int factorial(int num)
{
    int fact = 1;

    for (int i = 1; i <= num; i++)
        fact *= i;

    return fact;
}

void check_prime(int num)
{

    if (num <= 0)
        printf("%d is neither prime nor composite.", num);
    else
    {
        int factors = 2;

        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                factors += 1;
                break;
            }
        }

        if (factors == 2)
            printf("%d is a prime number", num);
        else
            printf("%d is a composite number.", num);
    }
}

int main()
{
    int num;
    char option;

    int a;
    float b;

    printf("C program to perform operation based on options\n\n");

    printf("Options\n"
           "1 - To add an integer and another floating point number\n"
           "2 - To find the sum of digits of a positive integer\n"
           "3 - To find the factorial of positive integer\n"
           "4 - To check whether an integer is prime or not\n");

    printf("Enter an option: ");
    option = getche();

    switch (option)
    {
    case '1':
        printf("\n\nC program to add integer and floating point number\n\n");

        printf("Enter an integer: ");
        scanf("%d", &a);

        printf("Enter a floating point number: ");
        scanf("%f", &b);

        printf("%d + %f = %f", a, b, add(a, b));

        break;
    case '2':
        printf("\n\nC program to find the sum of digits of an integer\n\n");

        printf("Enter an integer: ");
        scanf("%d", &num);

        if (num < 0)
            printf("Invalid input.");
        else
            sum_of_digits(num);

        break;
    case '3':
        printf("\n\nC program to find the factorial of a non-negative integer\n\n");

        printf("Enter an integer: ");
        scanf("%d", &num);

        if (num < 0)
            printf("Invalid input.");
        else
            printf("%d! = %d", num, factorial(num));

        break;
    case '4':
        printf("\n\nC program to find the whether an integer is prime or not\n\n");

        printf("Enter an integer: ");
        scanf("%d", &num);

        check_prime(num);

        break;
    default:
        printf("\nSorry, I don't understand option: %c", option);
        break;
    }

    getch();
    return 0;
}
