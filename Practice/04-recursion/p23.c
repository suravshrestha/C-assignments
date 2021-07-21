/*
    Practice
    23. Write a program to find x^y using recursion, where y is a positive integer.
*/

#include <stdio.h>
#include <conio.h>

float power(float x, unsigned int y)
{
    // base case
    if (y == 0)
        return 1;

    return x * power(x, y - 1); // x^y = x * (x ^ (y - 1))
}

int main()
{
    float x;
    unsigned int y;

    printf("C program to find x^y using recursion, where y is a positive integer\n");

    printf("Enter the value of x and y: ");
    scanf("%f %u", &x, &y);

    printf("%.2f ^ %u = %.2f", x, y, power(x, y));

    getch();
    return 0;
}
