/*
    Lab 9
    Pointer and Dynamic memory allocation
    1.  Write a program to find the larger of two numbers using the concept of function and pointer.
        Pass the two numbers from main function to a non-return type function that finds the larger number. 
        Display the larger number in main function. Read the two numbers from the user.
*/

#include <stdio.h>
#include <conio.h>

void find_larger(float a, float b, float *ptr)
{
    if (a > b)
        *ptr = a;
    else
        *ptr = b;
}

int main()
{
    printf("C program to find the larger number between two numbers\n\n");

    float a, b, larger;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    find_larger(a, b, &larger);

    printf("The larger number is: %.2f", larger);

    getch();
    return 0;
}
