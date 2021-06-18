/*
    6.  Write a program to read numbers until the current sum becomes 1000 using while loop.
*/

#include <stdio.h>
#include <conio.h>

void main(void)
{
    float num, sum = 0;

    while (sum <= 1000)
    {
        printf("Enter number: ");
        scanf("%f", &num);
        sum += num;
    }

    printf("Sum = %.2f", sum - num);

    getch();
}
