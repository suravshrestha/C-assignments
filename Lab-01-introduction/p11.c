/*
    Lab 1
    11. Write a program to read the time given for C programming in a day in hours and 
        display the total time in seconds in 30 days.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int hours, total_time;

    printf("C program to convert working time in a day in hours into seconds in a month.\n");

    printf("Enter the time given for C programming in day, in hours: ");
    scanf("%d", &hours);

    total_time = hours * 86400 * 30;
    printf("Total time in seconds = %d", total_time);

    getch();
    return 0;
}
