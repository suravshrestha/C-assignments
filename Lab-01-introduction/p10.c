/*
    Lab 1
    10. Write a program to read price of two pens and five copies and calculate the price after discounting 10%.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    float pens_price, copies_price, final_price;

    printf("C program to find the price of pens and copies after discount\n");

    printf("Enter the price of 2 pens: ");
    scanf("%f", &pens_price);

    printf("Enter the price of 5 copies: ");
    scanf("%f", &copies_price);

    final_price = 0.9 * (pens_price + copies_price);

    printf("Final price after discount: %.2f", final_price);

    getch();
    return 0;
}
