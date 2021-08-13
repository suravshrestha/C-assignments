/*
    Lab 11
    Structure
    5.  Write a program to compute any two instant memory spaces in a format (Kilobytes: Bytes: Bits) using structure.
        Build functions to add and subtract the given memory spaces.
        Display the result in main function.
*/

#include <stdio.h>
#include <conio.h>

#define MAX_LIMIT 100

struct Memory
{
    int kilobytes, bytes, bits;
};

void add_subtract(struct Memory m1, struct Memory m2, int sum[], int diff[])
{
    // 1KB = 8124 bits
    // 1 Byte = 8 bits
    int m1_in_bits = m1.kilobytes * 8124 + m1.bytes * 8 + m1.bits;
    int m2_in_bits = m2.kilobytes * 8124 + m2.bytes * 8 + m2.bits;

    int sum_total_bits = m1_in_bits + m2_in_bits;
    int diff_total_bits = (m1_in_bits > m2_in_bits) ? (m1_in_bits - m2_in_bits) : (m2_in_bits - m1_in_bits);

    sum[0] = sum_total_bits / 8124;
    sum[1] = (sum_total_bits % 8124) / 8;
    sum[2] = sum_total_bits % 8;

    diff[0] = diff_total_bits / 8124;
    diff[1] = (diff_total_bits % 8124) / 8;
    diff[2] = diff_total_bits % 8;
}

int main()
{
    struct Memory m1, m2;

    printf("C program to add and subtract two memory spaces given in the format Kilobytes, bytes, bits\n\n");

    printf("First memory space:\n");

    printf("Enter the kilobytes of first memory: ");
    scanf("%d", &m1.kilobytes);

    printf("Enter the bytes of first memory: ");
    scanf("%d", &m1.bytes);

    printf("Enter the bits of first memory: ");
    scanf("%d", &m1.bits);

    printf("\nSecond memory space:\n");

    printf("Enter the kilobytes of the stop time: ");
    scanf("%d", &m2.kilobytes);

    printf("Enter the bytes of the stop time: ");
    scanf("%d", &m2.bytes);

    printf("Enter the bits of the stop time: ");
    scanf("%d", &m2.bits);

    int sum[3];
    int diff[3];

    add_subtract(m1, m2, sum, diff);

    printf("\nFirst memory space");
    printf("\n%d: %d: %d", m1.kilobytes, m1.bytes, m1.bits);

    printf("\nSecond memory space");
    printf("\n%d: %d: %d", m2.kilobytes, m2.bytes, m2.bits);

    printf("\n\nSum");
    printf("\n%d: %d: %d", sum[0], sum[1], sum[2]);

    printf("\nDifference");
    printf("\n%d: %d: %d", diff[0], diff[1], diff[2]);

    getch();
    return 0;
}
