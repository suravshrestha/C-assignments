/*
    Lab 2
    6.  Write a program to read a temperature in Centigrade scale and display it in Fahrenheit scale.

    Formula used:
    C/100 = (F-32)/180
*/

#include <stdio.h>
#include <conio.h> //  for getch()

void main(void)
{
    float celsius, fahrenheit;

    printf("Enter the temperature in Centigrade scale: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * (9.0 / 5.0) + 32; // F = C(180/100) + 32

    printf("%.2f degree Celsius = %.2f degree Fahrenheit", celsius, fahrenheit);

    getch();
}
