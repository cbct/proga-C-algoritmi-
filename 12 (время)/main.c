#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 32


// struct tm { 
// 	int tm_sec;		    /* секунда минуты - [0,59] */ 
// 	int tm_min;		    /* минута часа - [0,59] */ 
// 	int tm_hour;		/* час дня - [0,23] */ 
// 	int tm_mday;		/* день месяца - [1,31] */ 
// 	int tm_mon;		    /* месяц года - [0,11] */ 
// 	int tm_year;		/* год, начиная с 1900 года */ 
// 	int tm_wday;		/* день недели - [0,6] */ 
// 	int tm_yday;		/* день года - [0,365] */ 
// 	int tm_isdst;		/* перевод часов летом на час вперед */ 
// }; 


void print_week(struct tm *time){
    char day[N];
    strftime(day, sizeof(day), "%A", time);
    printf("Day on week: %s \n", day);

}

int calc(int year, int month, int day, struct tm* time) {
    time->tm_year = year - 1900;
    time->tm_mon = month - 1;
    time->tm_mday = day;
    time->tm_hour = 0;
    time->tm_min = 0;
    time->tm_sec = 0;
    mktime(time);
    return time->tm_wday;
}



void mon_day(int year, int month){
    struct tm time;
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        days_in_month[1] = 29;
    }
    int day_of_week = calc(year, month, 1, &time);
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



int main(){

    while (1){
        printf("Vvedi daty v vide (yyyy.mm.dd, yyyy.mm, yyyy, or nast): ");
        char input[N];

        scanf("%s", input);
        
        if((strlen(input) == 4) && (strcmp(input, "nast") != 0)){           // календарь месяцев и дней за год
            int year = atoi(input);
            for (int i = 1; i <= 12; i++) {
                struct tm time;
                time.tm_year = year - 1900;
                time.tm_mon = i - 1;
                time.tm_mday = 1;
                char month_name[N];
                strftime(month_name, sizeof(N), "%B", &time);
                printf("%i %s (%i)\n", year, month_name, i);
                mon_day(year, i);
            }                    


        }else if(strlen(input) == 7){                   // выводит календарь дней за месяц
            int year, month;
            sscanf(input, "%d.%d", &year, &month);
            mon_day(year, month);                        


        }else if(strlen(input) == 10){                     // вычисляет день недели по гг.мм.дд
            int year, month, day;
            sscanf(input, "%i.%i.%i", &year, &month, &day);
            printf("Data: %04d.%02d.%02d\n", year, month, day);
            struct tm time; 
            calc(year, month, day, &time);
            print_week(&time); 
            


        }else if(strcmp(input, "nast") == 0){               // текущее время
            time_t t = time(NULL);
            struct tm *time = localtime(&t);
            printf("Nastoyashee vrema: %04d.%02d.%02d Time - %02d:%02d:%02d\n", time->tm_year +1900, 
                                                                                    time->tm_mon +1, 
                                                                                    time->tm_mday, 
                                                                                    time->tm_hour, 
                                                                                    time->tm_min, 
                                                                                    time->tm_sec);
            print_week(time);


        }else{
            printf("Retrying...\n");
        }
    }


    return 0;
}












































































































































