/*
    Lab 4
    8.  Write a program to enter an integer from 1 to 7 and display the corressponding day of the week, 1 -> Sunday.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int day;

    printf("C program to display the corresponding day of an integer, 1 -> Sunday\n");

    printf("Enter an integer from 1 to 7 (both inclusive): ");
    scanf("%d", &day);

    if (day == 1)
        printf("%d -> Sunday", day);
    else if (day == 2)
        printf("%d -> Monday", day);
    else if (day == 3)
        printf("%d -> Tuesday", day);
    else if (day == 4)
        printf("%d -> Wednesday", day);
    else if (day == 5)
        printf("%d -> Thursday", day);
    else if (day == 6)
        printf("%d -> Friday", day);
    else if (day == 7)
        printf("%d -> Saturday", day);
    else
        printf("Sorry, I don't understand %d", day);

    getch();
    return 0;
}
