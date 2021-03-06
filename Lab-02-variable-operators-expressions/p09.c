/*
    Lab 2
    9.  Write a program to read the number of boys and girls and display the ratio of girls to boys.
*/

#include <stdio.h>
#include <conio.h> //  for getch()

void main(void)
{
    unsigned int boys, girls;
    float ratio;

    printf("C program to display the ratio of number of girls to boys.\n");

    printf("Enter the number of boys and girls: ");
    scanf("%u %u", &boys, &girls);

    if (boys == 0)
    {
        printf("Error! Division by zero!!");
        return;
    }

    ratio = (float)girls / boys; // type casting

    printf("Ratio = %.2f", ratio);

    getch();
}
