#include <stdio.h>

int main(){
    int month, year, day;
    int totalDayOfMonth;
    int validInput;
do {
    validInput = 1; 
    printf("Input year :="); scanf("%d", &year);
    printf("Input month :="); scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("ERROR: Month must be between 1 and 12.\n");
        validInput = 0;
    } else {
        switch (month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                totalDayOfMonth = 31;
                break;
            case 4: case 6: case 9: case 11:
                totalDayOfMonth = 30;
                break;
            case 2:
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    totalDayOfMonth = 29;
                } else {
                    totalDayOfMonth = 28;
                }
                break;
        }

        if (validInput && (day < 1 || day > totalDayOfMonth)) { 
            printf("ERROR: Day %d is invalid for month %d, year %d (should be 1-%d).\n", day, month, year, totalDayOfMonth);
            validInput = 0;
        }
    }

    if (!validInput) {
        printf("Please try again !!!\n");
    }
} while (!validInput);

printf("Day of month %d/ year %d is: %d\n", month, year, totalDayOfMonth);
return 0;
}