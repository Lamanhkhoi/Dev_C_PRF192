#include <stdio.h>

int main(){
    int month, year, day;
    int totalDayOfMonth;
 
    do{
        printf("Input year :=");
        scanf("%d",&year);
        printf("Input month :=");
        scanf("%d",&month);
        printf("Input day :=");
        scanf("%d",&day);
        if ( month < 1 || month > 12 || day < 1 || day > 31){
            printf("ERROR !!! Please try again !!!\n");
        }
    }while (month < 1 || month > 12 || day < 1 || day > 31);

    switch (month){
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        totalDayOfMonth = 31;
        break;
    case 4: case 6: case 9: case 11:
        totalDayOfMonth = 30;
        break;
    default:
        if ( year % 4 == 0 || year % 400 == 0 ){
            totalDayOfMonth = 29;
        }else {
            totalDayOfMonth = 28;
        } 
        break;
    }

    printf("Day of month %d/ year %d is: %d\n", month, year, totalDayOfMonth);
    
    // check day
    if (month == 12 && day == 31){
        month -= 11;
        day = 1;
        year += 1;
    }else if ( month == 2){
        if ( totalDayOfMonth == 28 || totalDayOfMonth == 29){
            day = 1;
            month += 1;
        }else{day += 1;}
    } else if ( month % 2 == 0 && month != 8 && month != 2){
        if ( day == 30){
            day = 1;
            month += 1;
        }else{day += 1;}
    }else {
        if ( day == 31){
            day = 1;
            month += 1;
        }else{day += 1;}
    }

    printf("Current time today is: %d/%d/%d", day,month,year);
    return 0;
}