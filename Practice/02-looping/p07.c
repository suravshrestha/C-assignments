/*
    Practice
    7.  Write a program to read numbers until the current sum becomes 1000 using do-while loop.
*/

#include <stdio.h>
#include <conio.h>

void main(void)
{
    float num = 0, sum = 0;

    do
    {
        sum += num;
        printf("Enter number: ");
        scanf("%f", &num);
    } while (sum + num <= 1000);

    printf("Sum = %.2f", sum);

    getch();
}
