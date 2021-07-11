/*
    Practice
    25. Write a program to read two integers swap them using function (use function call by reference)
*/

#include <stdio.h>
#include <conio.h>

void swap(int *x, int *y) // *x = &a, *y = &b
{
    // * is known as value of operator
    // It is also known as indirection operator or dereference operator

    // pointer variable x points to variable a
    // so the value of variable a is stored in variable temp
    int temp = *x;

    // pointer variable x points to variable a
    // pointer variable y points to variable b
    // so the value of variable b is stored in variable a
    *x = *y;

    // temp stores the value pointed by pointer variable x i.e. value of variable a
    // pointer variable y points to variable b
    // so the value of variable a is stored in variable b
    *y = temp;
}

int main()
{
    printf("C program to swap two integers\n\n");

    int a, b;
    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter another integer: ");
    scanf("%d", &b);

    printf("\nBefore swapping:\n");
    printf("a = %d, b = %d", a, b);

    swap(&a, &b); // pass the address of variables a and b

    printf("\nAfter swapping:\n");
    printf("a = %d, b = %d", a, b);

    getch();
    return 0;
}
