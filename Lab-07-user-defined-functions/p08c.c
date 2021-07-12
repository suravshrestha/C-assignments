/*
    Lab 7
    8.c)  Write a program to find the HCF of two integers using recursion.


    The highest common factor (H.C.F) or greatest common divisor (G.C.D) of two
    numbers is the largest positive integer that perfectly divides the two given numbers.

    HCF for negative numbers: 
    https://proofwiki.org/wiki/GCD_for_Negative_Integers

    Algorithm used: Euclidean algorithm for HCF
    Algorithm reference: 
    https://en.wikipedia.org/wiki/Euclidean_algorithm

    Algorithm principle:
    The Euclidean algorithm is based on the principle that the greatest common divisor of two numbers 
    does not change if the larger number is replaced by its difference with the smaller number.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h> // for abs()

int hcf(int a, int b)
{
    // Euclidean algorithm for HCF
    if (a == 0 || a == b)
        return b;

    if (b == 0)
        return a;

    if (a > b)
        return hcf(a - b, b);

    if (b > a)
        return hcf(a, b - a);
}

int main()
{
    int a, b;

    printf("C program to find the HCF of two integers\n\n");

    printf("Enter any two integers: ");
    scanf("%d %d", &a, &b);

    // abs() is used to convert negative integer to positive integer
    // HCF(-3, -2) = HCF(3, 2) = HCF(2, 3) = 6

    printf("HCF(%d, %d) = %d", a, b, hcf(abs(a), abs(b)));

    getch();
    return 0;
}
