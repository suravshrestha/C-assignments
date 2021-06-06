/*
    1. WAP to find the area of a triangle.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float a, b, c, s, area;

    printf("Enter the three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (!((a + b) > c))
    {
        printf("Triangle with the given sides is not possible.");
        return 0;
    }

    // Triangle is possible
    s = (a + b + c) / 2;

    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of the triangle with sides %.2f, %.2f, and %.2f is %.2f", a, b, c, area);

    getch();
    return 0;
}
