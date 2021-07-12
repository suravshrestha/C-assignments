/*
    Lab 7
    3.  Write a program to find the factorial of a non-negative number using return type function of type unsigned int.
*/

#include <stdio.h>
#include <conio.h>

// using non-recursive algorithm
unsigned int factorial(int num)
{
    int fact = 1;

    for (int i = 1; i <= num; i++)
        fact *= i;

    return fact;
}

int main()
{
    int num;

    printf("C program to find the factorial of a non-negative integer\n\n");

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Invalid input.");
    else
        printf("%d! = %d", num, factorial(num));

    getch();
    return 0;
}
