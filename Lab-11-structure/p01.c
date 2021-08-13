/*
    Lab 11
    Structure
    1.  Write a program to create a structure having the members name, address, telephone, salary of an employee.
        Read the values from the user and display.
*/

#include <stdio.h>
#include <conio.h>

#define MAX_LIMIT 100

struct Employee
{
    char name[MAX_LIMIT];
    char address[MAX_LIMIT];
    char telephone[10];
    unsigned int salary;
};

int main()
{
    struct Employee e1;

    printf("C program to store the data of an employee and display the data\n\n");

    printf("Enter the name of the employee: ");
    gets(e1.name);

    printf("Enter the address of the employee: ");
    gets(e1.address);

    printf("Enter the telephone number of the employee: ");
    gets(e1.telephone);

    printf("Enter the salary of the employee: ");
    scanf("%u", &e1.salary);

    printf("\nEmployee details:");
    printf("\nName: %s", e1.name);
    printf("\nAddress: %s", e1.address);
    printf("\nTelephone number: %s", e1.telephone);
    printf("\nSalary: %u", e1.salary);

    getch();
    return 0;
}
