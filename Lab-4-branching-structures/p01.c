/*
    Lab 4
    1.  If a person's age is greater than 65, they get the seniority allowance. 
        Write a program to read age of a person, and display appropriate message.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int age;

    printf("C program to check whether seniority allowance is given to a person or not\n");

    printf("\nEnter the age of the person: ");
    scanf("%d", &age);

    printf("\nSeniority allowance is given to people greater than 65 years.");

    printf("\nEntered age: %d", age);

    if (age > 65)
        printf("\nThe person will get seniority allowance.");
    else
        printf("\nThe person will not get seniority allowance.");

    getch();
    return 0;
}
