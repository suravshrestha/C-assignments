/*
    Lab 2
    10.d)   Write a program to evaluate the following expressions:
            (u/x + v/y)^5 / (p^2/(3u^(2.5)) - q/(2v)^3.5)  
*/

#include <stdio.h>
#include <conio.h> //  for getch()
#include <math.h>  //  for pow()

void main(void)
{
    float u, v, x, y, p, q;
    double result;

    printf("C program to evaluate the following expression:\n");
    printf("(u/x + v/y)^5 / (p^2/(3u^(2.5)) - q/(2v)^3.5)\n");

    printf("Enter the values of u, v, x, y, p, and q: ");
    scanf("%f %f %f %f %f %f", &u, &v, &x, &y, &p, &q);

    if (x == 0 || y == 0 || u == 0 || v == 0)
    {
        printf("Error! Division by zero!!");
        return;
    }

    float base1 = u / x + v / y;
    float base2 = (p * p) / (3 * pow(u, 2.5)) - q / (2 * v);

    if (base2 == 0)
    {
        printf("Error! Division by zero!!");
        return;
    }

    result = pow(base1, 5) / pow(base2, 3.5);

    printf("Result = %lf", result);

    getch();
}
