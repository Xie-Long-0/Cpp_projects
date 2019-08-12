#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int year)
{
    if (year % 400 == 0)
        return true;
    if (year % 4 == 0 && year % 100 != 0)
        return true;
    return false;
}

int months[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    int year, month, day;
    printf("Input a date(yyyy-m-d): ");
    scanf("%d%*c%d%*c%d", &year, &month, &day);

    int alldays = 0;
    for (int i = 1; i < year; i++)
        alldays += isLeapYear(i) ? 366 : 365;

    for (int i = 1; i < month; i++) {
        alldays += months[i];
        if (2 == i && isLeapYear(year))
            ++alldays;
    }

    alldays += day;
    printf("This day is the %d day.\n", alldays);
    return 0;
}
