/*
    Lab 10
    String
    9.  Write a program to read a string from the user and swap the case of each character of the string.
        Convert uppercased letters to lower and vice versa.
*/

#include <stdio.h>
#include <conio.h>
#include <ctype.h> // for islower() isupper() tolower() toupper()

int main()
{
    printf("C program to convert uppercased letters of a string into lowercase and vice versa\n\n");

    char str[100];
    char final_str[100];

    printf("Enter a string: ");
    gets(str);

    // using toupper() and tolower()
    for (int i = 0; i < 100; i++)
    {
        if (islower(str[i]))
            final_str[i] = toupper(str[i]); // convert lowercased letter to uppercase
        else if (isupper(str[i]))
            final_str[i] = tolower(str[i]); // convert uppercased letter to lowercase
        else
            final_str[i] = str[i];
    }

    // // without using tolower() toupper()
    // for (int i = 0; i < 100; i++)
    // {
    //     // ascii code for lowercased letters [65, 90]
    //     // ascii code for uppercased letters [97, 122]
    //     if (str[i] > 64 && str[i] < 91)
    //         final_str[i] = str[i] + 32; // convert uppercased letter to lowercase
    //     else if (str[i] > 96 && str[i] < 123)
    //         final_str[i] = str[i] - 32; // convert lowercased letter to uppercase
    //     else
    //         final_str[i] = str[i];
    // }

    printf("\nConverted string: %s", final_str);
}
