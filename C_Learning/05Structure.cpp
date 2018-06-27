#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//int main(void) {
//    void date_test();
//    void calendar_test();
//    //date_test();
//    calendar_test();
//}

struct date {
    int year;
    int month;
    int day;
};
void date_test() {
    struct date today;
    today.year = 2018;
    today.month = 3;
    today.day = 8;
    printf("today is %.2d/%d/%d\n", today.year % 100, today.month, today.day);
}

void calendar_adder() {
    date get_date();
    date adder_logic(date today, int days);
    void display_date(date the_date);
    int days_added;
    struct date today,that_day;  
    today = get_date();
    printf("the days you want to add£º");
    scanf_s("%d", &days_added);   
    that_day = adder_logic(today, days_added);  
    display_date(that_day);
}

date get_date() {
    int year, month, day;
    scanf_s("%d %d %d", &year, &month, &day);
    date d;
    d.year = year; 
    d.month = month;
    d.day = day;
    return d;
}

date adder_logic(date today, int days) {
    int days_per_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int year = today.year;
    int month = today.month; 
    int day = today.day;
    day += days;
    while (day > days_per_month[month]){
        day -= days_per_month[month++];
        printf("month=%d\n", month);
        if (month > 12) {
            year++;
            month = 1;
        }
    }
    date the_day;
    the_day.year = year; 
    the_day.month = month;
    the_day.day = day;
    return the_day;
}

void display_date(date the_date) {
    printf("the day is:%d/%d/%.2d\n", the_date.month, the_date.day, the_date.year % 100);
}

void calendar_test() {
    void calendar_adder();
    struct date today;
    today.year = 2017;
    today.month = 12;
    today.day = 16;

    int days_added = 300;
    date the_day = adder_logic(today, days_added);
    display_date(the_day);
}