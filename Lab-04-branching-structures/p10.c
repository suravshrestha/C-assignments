/*
    Lab 4
    10. Write a program to enter at most 10 integers and continue until the user enters "b".
        Find the sum of entered integers which are divisible by 9 but not by 6 and the integer must lie between 1 and 100.
        Display suitable message if no such numbers are entered.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int num, num_count = 0, sum = 0;
    char break_option;

    printf("C program to enter at most 10 integers and find the sum of entered integers which are divisible by 9 but not by 6 and lies between 1 and 100.");

    for (int i = 0; i < 10; i++)
    {
        printf("\n\nEnter an integer: ");
        scanf("%d", &num);

        if (num > 1 && num < 100 && num % 9 == 0 && !(num % 6 == 0))
        {
            sum += num;
            num_count += 1;
        }

        printf("Press 'b' if you want to stop entering integer: ");
        break_option = getch();

        if (break_option == 'b')
            break;
    }

    if (num_count == 0)
        printf("\n\nNo such numbers were entered.");
    else
        printf("\n\n%d integer entered which satisfied the condition.", num_count);

    printf("\nSum = %d", sum);

    getch();
    return 0;
}


