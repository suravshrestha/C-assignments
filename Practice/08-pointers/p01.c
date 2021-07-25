/*
    Practice
    Pointers
    1.  Write a program to find the largest of two numbers using the concept of pointers
*/

#include <stdio.h>
#include <conio.h>

void find_largest(float *p, float *q, float *max)
{
    // p, q, max are pointer variables which point to float data type
    if (*p > *q)
        *max = *p;
    else
        *max = *q;
}

int main()
{
    printf("C program to find the largest number among two numbers using pointers\n\n");

    float a, b, max;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    find_largest(&a, &b, &max);

    printf("The largest of the two numbers %.2f and %.2f is %.2f", a, b, max);

    return 0;
    getch();
}
