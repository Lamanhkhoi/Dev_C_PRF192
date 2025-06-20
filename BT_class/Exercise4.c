#include <stdio.h>

void menu(){
	printf("|---------------------MENU--------------------------|");
	printf("\n1. Processing date data");
	printf("\n2. Character data");
	printf("\n3. exit");
	printf("\n|---------------------------------------------------|");
}

int namNhuan(int year){
	if ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
		return 1;
	}
	return 0;
}

int checkDate(int month, int day){
	int dayCheck ;
	int year;
	printf("Input month:=");scanf("%d",&month);
	printf("Input day:=");scanf("%d",&day);
	switch(month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			dayCheck = 31;
			break;
		case 4: case 6: case 9: case 11:
			dayCheck = 30;
			break;
		case 2:
			if (namNhuan() == 1){
				dayCheck = 31;
			} else {
				dayCheck = 30;
			}
	}
	if ( day != dayCheck ){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int option,year;
	
	menu();
	printf("\nInput your option:=");scanf("%d",option);
	switch(option){
		case 1:
			printf("Input year:=");scanf("%d",&year);
			printf("Input month:=");scanf("%d",&month);
			printf("Input day:=");scanf("%d",&day);
			
			if (checkDate() == 1){
				printf("Date accept!!!");
			} else {
				printf(" Invaild date!!!");
			}
			break;
		case 2:
		
		case 3:
			
		default:
			printf("Invaild option. Exit program!!!");
			break;
	}
	return 0;
}