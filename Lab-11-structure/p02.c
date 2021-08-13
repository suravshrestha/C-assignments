/*
    Lab 11
    Structure
    2.  Write a program to create a structure having the members name, address, telephone, salary of 10 employees.
        Display the details of the employee with the highest salary and lowest salary, and the average salary of those employees.
        Read the values from the user.
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
    struct Employee e[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the details for employee %d\n", i + 1);

        printf("Enter the name of the employee: ");
        scanf(" %[^\n]", e[i].name);

        printf("Enter the address of the employee: ");
        scanf(" %[^\n]", e[i].address);

        printf("Enter the telephone number of the employee: ");
        scanf(" %[^\n]", e[i].telephone);

        printf("Enter the salary of the employee: ");
        scanf("%u", &e[i].salary);

        printf("\n");
    }

    int max_salary = e[0].salary;
    int min_salary = e[0].salary;

    int max_index = 0, min_index = 0;

    for (int i = 1; i < 10; i++)
    {
        if (e[i].salary > e[max_index].salary)
            max_index = i;
        else if (e[i].salary < e[min_index].salary)
            min_index = i;
    }

    printf("\nHighest salary employee:");
    printf("\nName: %s", e[max_index].name);
    printf("\nAddress: %s", e[max_index].address);
    printf("\nTelephone number: %s", e[max_index].telephone);
    printf("\nSalary: %u", e[max_index].salary);

    printf("\n\nLowest salary employee:");
    printf("\nName: %s", e[min_index].name);
    printf("\nAddress: %s", e[min_index].address);
    printf("\nTelephone number: %s", e[min_index].telephone);
    printf("\nSalary: %u", e[min_index].salary);

    getch();
    return 0;
}
