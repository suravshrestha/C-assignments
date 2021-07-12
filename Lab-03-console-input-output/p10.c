/*
    Lab 3
    10. Write a program to read string using %wc format specifier.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    char string[5];

    printf("C program to show format specifier variation for string input\n");

    /*
        for %c format specifier with input, the integer after % specifies the number of characters to input.
        The maximum field width says how many characters to read; 
        if we don’t specify the maximum width, the default is 1.
        This conversion doesn’t append a null character to the end of the text it reads. 
        It also does not skip over initial whitespace characters.
    */
    printf("Enter a string: ");
    scanf("%5c", string); // only read the first 5 characters of the string

    printf("The string read is: %s", string);

    getch();
    return 0;
}
