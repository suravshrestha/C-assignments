/*
    Lab 7
    4.  Write a program to read an integer and find whether it is prime or not using non-return type function.
*/

#include <stdio.h>
#include <conio.h>

void check_prime(int num)
{

    if (num <= 0)
        printf("0 is neither prime nor composite.");
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

    printf("C program to find the whether an integer is prime or not\n\n");

    printf("Enter an integer: ");
    scanf("%d", &num);

    check_prime(num);

    getch();
    return 0;
}
