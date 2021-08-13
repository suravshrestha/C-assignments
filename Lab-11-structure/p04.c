/*
    Lab 11
    Structure
    4.  Write a program to create a structure Time having the members hours, minutes and seconds.
        Create two structure variables for start time and stop time using the structure.
        Display the sum and difference between the start time and stop time. 
        Read the values for the members from the user.
*/

#include <stdio.h>
#include <conio.h>

#define MAX_LIMIT 100

struct Time
{
    int hours, minutes, seconds;
};

int main()
{
    struct Time start_time, stop_time;

    printf("Start time:\n");

    printf("Enter the hour of the start time: ");
    scanf("%d", &start_time.hours);

    printf("Enter the minutes of the start time: ");
    scanf("%d", &start_time.minutes);

    printf("Enter the seconds of the start time: ");
    scanf("%d", &start_time.seconds);

    printf("\nStop time:\n");

    printf("Enter the hour of the stop time: ");
    scanf("%d", &stop_time.hours);

    printf("Enter the minutes of the stop time: ");
    scanf("%d", &stop_time.minutes);

    printf("Enter the seconds of the stop time: ");
    scanf("%d", &stop_time.seconds);

    int start_in_seconds = start_time.hours * 3600 + start_time.minutes * 60 + start_time.seconds;
    int stop_in_seconds = stop_time.hours * 3600 + stop_time.minutes * 60 + stop_time.seconds;

    int sum_total_seconds = start_in_seconds + stop_in_seconds;
    int diff_total_seconds = (start_in_seconds > stop_in_seconds) ? (start_in_seconds - stop_in_seconds) : (stop_in_seconds - start_in_seconds);

    int sum_hr = sum_total_seconds / 3600;
    int sum_min = (sum_total_seconds % 3600) / 60;
    int sum_sec = sum_total_seconds % 60;

    int diff_hr = diff_total_seconds / 3600;
    int diff_min = (diff_total_seconds % 3600) / 60;
    int diff_sec = diff_total_seconds % 60;

    printf("\nStart time");
    printf("\n%d: %d: %d", start_time.hours, start_time.minutes, start_time.seconds);

    printf("\nStop time");
    printf("\n%d: %d: %d", stop_time.hours, stop_time.minutes, stop_time.seconds);

    printf("\n\nSum");
    printf("\n%d: %d: %d", sum_hr, sum_min, sum_sec);

    printf("\nDifference");
    printf("\n%d: %d: %d", diff_hr, diff_min, diff_sec);

    getch();
    return 0;
}
