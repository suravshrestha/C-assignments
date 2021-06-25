/*
    Lab 4
    4.  Write a program to enter an alphabet and convert it into uppercase if it is lowercase and vice versa.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    char c;

    printf("C program to convert alphabet into uppercase if it is lowercase and vice and versa\n");

    printf("Enter an alphabet: ");
    scanf(" %c", &c);

    if (c >= 65 && c <= 90) // uppercased alphabet has ASCII code [65, 90]
        printf("Lowercased letter of %c is %c", c, c + 32);
    else if (c >= 97 && c <= 122) // lowercased alphabet has ASCII code [97, 122]
        printf("Uppercased letter of %c is %c", c, c - 32);
    else
        printf("The entered character is not an alphabet.");

    // alternative method; without referencing ascii code
    // if (c >= 'A' && c <= 'Z')
    //     printf("Lowercased letter of %c is %c", c, c + ('a' - 'A'));
    // else if (c >= 'a' && c <= 'z')
    //     printf("Uppercased letter of %c is %c", c, c - ('a' - 'A'));
    // else
    //     printf("The entered character is not an alphabet.");

    getch();
    return 0;
}