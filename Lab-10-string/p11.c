
/*
    Lab 10
    String
    10. Write a program which performs the following tasks:
        - ask the question "Who is the creator of the C programming langauge?"
        - print "CORRECT!" is the answer is correct
        - print "INCORRECT, TRY AGAIN" if the answer is wrong and ask the question again
        - print the correct answer if the answer is wrong even at the third attempt and stop
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char answer[100];

    int try_count = 0;

    while (1)
    {
        try_count++;

        printf("Who is the creator of the C programming language? ");
        gets(answer);

        if (strcmp(answer, "Dennis Ritchie") == 0)
        {
            printf("\nCORRECT!");
            break;
        }

        if (try_count == 3)
        {
            printf("\nINCORRECT!\nYou could not answer even at the third attempt\n\n");
            printf("The correct answer is:\n");
            printf("Dennis Ritchie");
            break;
        }

        printf("\nINCORRECT, TRY AGAIN\n");
    }

    getch();
    return 0;
}
