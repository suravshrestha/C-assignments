/*
    Lab 12
    File handling
    3.  Write a program to read roll number, name, address, and phone number of students until the user enters 'n' or 'N'.
        Store the information in a new file and display the content of the file after saving the information.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *fp;

    char roll_number[5];
    char name[50];
    char address[50];
    char phone_number[50];

    fp = fopen("p03.txt", "w");

    char option;

    while (1)
    {
        printf("Roll Number: ");
        scanf(" %[^'\n']", roll_number);

        printf("Name: ");
        scanf(" %[^'\n']", name);

        printf("Address: ");
        scanf(" %[^'\n']", address);

        printf("Phone number: ");
        scanf(" %[^'\n']", phone_number);

        fprintf(fp, "%s %s %s %s\n", roll_number, name, address, phone_number);

        printf("\nn/N: Stop entering record\n");
        option = getche();

        if (option == 'n' || option == 'N')
            break;

        printf("\n");
    }

    fclose(fp);

    printf("\n\n");

    char ch;

    fp = fopen("p03.txt", "r");

    if (fp == NULL)
    {
        printf("\nFile not found!");
        return 0;
    }

    while (ch != EOF)
    {
        ch = fgetc(fp);

        putchar(ch);
    }

    fclose(fp);

    return 0;
}
