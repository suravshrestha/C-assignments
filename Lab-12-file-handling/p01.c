/*
    Lab 12
    File handling
    1.  Write a program to ask for a year and write the year in a file only if it it leap year.
*/

#include <stdio.h>
#include <conio.h>

int is_leap_year(int year)
{
    if (year % 4 != 0)
        return 0;
    else if (year % 100 != 0)
        return 1;
    else if (year % 400 != 0)
        return 0;

    return 1;
}

int main()
{
    printf("C program to write leap years to a file\n\n");

    FILE *fp = fopen("p01_leap_year.txt", "a+");

    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (is_leap_year(year))
    {
        printf("\nLeap year");

        printf("\nWriting to p01_leap_year.txt...");
        fprintf(fp, "%d\n", year);
    }
    else
    {
        printf("\nNot Leap year");
    }

    fclose(fp);

    return 0;
}
