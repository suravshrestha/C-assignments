/*
    Lab 2
    2.  A program to illustrate prefix increment operator.
*/

#include <stdio.h>
#include <conio.h> //  for getch()

void main(void)
{
    int a = 5, b;

    printf("C program to illustrate prefix increment operator.\n");
    printf("b = ++a * ++a + ++a, where a = 5\n");

    /*
        ++ operator is a unary operator known as prefix increment operator.
        this operator has the highest precedence
    */
    b = ++a * ++a + ++a;

    printf("b = %d\n", b);
    printf("a = %d", a);

    getch();
}
