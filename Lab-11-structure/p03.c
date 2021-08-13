/*
    Lab 11
    Structure
    3.  Write a program to create a structure having the members name, address, telephone, Date of Birth.
        For Date of Birth, create another structure with the members year, day, month.
        Prompt the user to enter the records until the user enters 'n' or 'N'.
        Display the final database in tabular form.
*/

#include <stdio.h>
#include <conio.h>

#define MAX_LIMIT 25

struct Date
{
    int year, month, day;
};

struct Person
{
    char name[MAX_LIMIT];
    char address[MAX_LIMIT];
    char telephone[10];
    struct Date dob;
};

int main()
{
    struct Person p[100];

    char option;

    int records = 0;

    while (1)
    {
        printf("Enter the details for person %d\n", records + 1);

        printf("Enter the name of the person: ");
        scanf(" %[^\n]", p[records].name);

        printf("Enter the address of the person: ");
        scanf(" %[^\n]", p[records].address);

        printf("Enter the telephone number of the person: ");
        scanf(" %[^\n]", p[records].telephone);

        printf("Enter the year of birth of the person: ");
        scanf("%d", &p[records].dob.year);

        printf("Enter the month of birth of the person: ");
        scanf("%d", &p[records].dob.month);

        printf("Enter the day of birth of the person: ");
        scanf("%d", &p[records].dob.day);

        printf("\nn/N: Stop entering record\n");
        option = getche();

        records++;

        if (option == 'n' || option == 'N')
            break;

        printf("\n");
    }
    
    printf("\n\nDatabase:");

    printf("\n-----------------------------------------------------------------------------------------------\n");
    printf("| %-3s | %-25s | %-25s | %-16s | %-10s |", "SN", "Name", "Address", "Telephone Number", "DOB");
    printf("\n-----------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < records; i++)
    {
        printf("| %3d | %-25s | %-25s | %-17s | %4d/%2d/%2d |", i + 1, p[i].name, p[i].address, p[i].telephone, p[i].dob.year, p[i].dob.month, p[i].dob.day);
        printf("\n-----------------------------------------------------------------------------------------------\n");
    }

    getch();
    return 0;
}
