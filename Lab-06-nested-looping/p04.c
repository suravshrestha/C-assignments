/*
    Lab 6
    4.  Write a program to find the sum of all the positive numbers entered by the user, until the user enters 0.
*/

#include <stdio.h>
#include <conio.h>

int main()

{
    float num, sum = 0;

    printf("C program to find the sum of positive integers until the user enters 0\n\n");

    while (1)
    {
        printf("Enter number: ");
        scanf("%f", &num);

        if (num == 0)
            break;

        if (num > 0)
            sum += num;
    }

    printf("The sum of only the positive numbers entered = %.2f", sum);

    getch();
    return 0;
}
