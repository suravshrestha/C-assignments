/*
    Lab 2
    2.  A program to illustrate prefix increment operator.
*/

#include <stdio.h>
#include <conio.h> //  for getch()

void main(void)
{
    int a = 5, b;

    b = ++a * ++a + ++a;
    printf("b = %d\n", b);
    printf("a = %d", a);

    getch();
}

