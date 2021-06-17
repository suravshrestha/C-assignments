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

    printf("C program to find the equivalent resistance in series and parallel combination\n");

    printf("Enter the value of first resistance: ");
    scanf("%f", &r1);

    printf("Enter the value of second resistance: ");
    scanf("%f", &r2);

    if (r1 < 0 || r2 < 0)
    {
        printf("Negative resistance is not possible.");
        return;
    }

    r_series = r1 + r2;
    r_parallel = (r1 * r2) / (r1 + r2);

    printf("Equivalent resistance for series combination: %.2f", r_series);
    printf("\nEquivalent resistance for parallel combination: %.2f", r_parallel);

    getch();
}
