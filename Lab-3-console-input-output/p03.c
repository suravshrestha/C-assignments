/*
    Lab 3
    3.  Write a program to read a string using gets() and display using puts()
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    char s[100];

    printf("C program to show console string input\n");

    printf("Enter a string: ");
    // gets() reads a line from standard input (stdin) until a newline(\n) or End-Of-File (EOF) is encountered
    gets(s); // gets() stands for get string

    printf("\nEntered string is: ");
    // puts() writes a string to the standard output (stdout) upto but not including the newline(\n)
    // a newline is appended to the output
    puts(s); // puts stands for put string

    getch();
    return 0;
}
