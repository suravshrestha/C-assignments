/*
    Lab 1
    8.  Write a program to read four integers from the user and display the mean of the numbers.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c, d;
    float mean;

    printf("C program to find the mean of four integers.\n");

    printf("Enter the values of a, b, c and d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    mean = (a + b + c + d) / 4.0; // a form of type casting

    printf("Entered integers: %d %d %d %d\n", a, b, c, d);
    printf("Mean of the integers = %.2f", mean);

    getch();
    return 0;
}
