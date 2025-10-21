// According to the Gregorian calendar, it was Monday on 1st January 1900. If any year is input through the keyboard, write a program to find out what is the day on 1st January of that year.
#include <stdio.h>

int main() {
    int year, day;
    
    printf("Enter the year: ");
    scanf("%d", &year);

    // Monday on 1 Jan 1900
    day = (year - 1900) + (year - 1900) / 4 - (year - 1900) / 100 + (year - 1600) / 400;
    day = (day + 1) % 7;

    printf("1st January %d was ", year);

    switch(day) {
        case 0: printf("Sunday\n"); break;
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
    }

    return 0;
}

