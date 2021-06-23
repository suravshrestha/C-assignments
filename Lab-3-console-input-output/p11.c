/*
    Lab 3
    11. Write a program to use search set to read string in format specification.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    char age[3];
    char a;

    printf("C program to validate string input using format specifier\n");

    /*
        %[] format specifier is similar to regular expressions, but "not" exactly regular expressions
        only the characters specified within the brackets are allowed in the string
        the characters specified after ^ are not allowed
    */
    printf("Enter your age: ");
    scanf("%[0-9]", age); // only integers allowed

    printf("The entered age is: %s", age);

    printf("\nEnter an alphabet other than k: ");
    scanf("%[^k]", &a); // 'k' not allowed

    printf("The entered alphabet is: %s", a);

    getch();
    return 0;
}
