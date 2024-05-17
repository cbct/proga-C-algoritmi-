#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Function to calculate day of the week
int calculate_day_of_week(int year, int month, int day) {
    struct tm tm = { .tm_year = year - 1900, .tm_mon = month - 1, .tm_mday = day };
    mktime(&tm);
    return tm.tm_wday;
}

// Function to print calendar for a month
void print_month_calendar(int year, int month) {
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        days_in_month[1] = 29;
    }
    int day_of_week = calculate_day_of_week(year, month, 1);
    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
    for (int i = 0; i < day_of_week; i++) {
        printf("     ");
    }
    for (int i = 1; i <= days_in_month[month - 1]; i++) {
        printf("%5d", i);
        if ((day_of_week + i - 1) % 7 == 6) {
            printf("\n");
        }
    }
    printf("\n");
}

// Function to print calendar for a year
void print_year_calendar(int year) {
    for (int i = 1; i <= 12; i++) {
        printf("%d %d\n", year, i);
        print_month_calendar(year, i);
        printf("\n");
    }
}

int main() {
    char input[20];
    while (1) {
        printf("Enter date (yyyy.mm.dd, yyyy.mm, yyyy, or now): ");
        scanf("%s", input);
        if (strcmp(input, "now") == 0) {
            time_t t = time(NULL);
            struct tm *tm = localtime(&t);
            printf("Today is %s, %d %d, %d\n", 
                   tm->tm_wday == 0 ? "Sunday" : 
                   tm->tm_wday == 1 ? "Monday" : 
                   tm->tm_wday == 2 ? "Tuesday" : 
                   tm->tm_wday == 3 ? "Wednesday" : 
                   tm->tm_wday == 4 ? "Thursday" : 
                   tm->tm_wday == 5 ? "Friday" : "Saturday", 
                   tm->tm_mon + 1, tm->tm_mday, tm->tm_year + 1900);
        } else if (strlen(input) == 4) {
            int year = atoi(input);
            print_year_calendar(year);
        } else if (strlen(input) == 7) {
            int year, month;
            sscanf(input, "%d.%d", &year, &month);
            print_month_calendar(year, month);
        } else if (strlen(input) == 10) {
            int year, month, day;
            sscanf(input, "%d.%d.%d", &year, &month, &day);
            int day_of_week = calculate_day_of_week(year, month, day);
            printf("Day of the week: %s\n", 
                   day_of_week == 0 ? "Sunday" : 
                   day_of_week == 1 ? "Monday" : 
                   day_of_week == 2 ? "Tuesday" : 
                   day_of_week == 3 ? "Wednesday" : 
                   day_of_week == 4 ? "Thursday" : 
                   day_of_week == 5 ? "Friday" : "Saturday");
        } else {
            printf("Invalid input. Please try again.\n");
        }
    }
    return 0;
}












































































































































