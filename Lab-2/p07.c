/*
    Lab 2
    7.  Write a program to read two resistances from the user and print the equivalent resistance for series and parallel combination

    Formula used:
    For series combinationL: Req = (R1 + R2)
    For parallel combinationL: Req = (R1 x R2)/ (R1 + R2)
*/

#include <stdio.h>
#include <conio.h> //  for getch()

void main(void)
{
    float r1, r2, r_series, r_parallel;

    printf("Enter the value of first resistance: ");
    scanf("%.2f", &r1);

    printf("Enter the value of first resistance: ");
    scanf("%.2f", &r1);

    if (r1 < 0 || r2 < 0)
    {
        printf("Negative resistance is not possible.");
        return;
    }

    r_series = r1 + r2;
    r_parallel = (r1 * r2) / (r1 + r2);

    printf("Equivalent resistance for series combination: ", r_series);
    printf("Equivalent resistance for parallel combination: ", r_parallel);

    getch();
}
