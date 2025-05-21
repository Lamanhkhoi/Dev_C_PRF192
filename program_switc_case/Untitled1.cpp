#include <stdio.h>

int main(){
	int number;
	
	do {
		printf("Input the number form 1 to 9 :=");
		scanf("%d", &number);
		if ( number < 1){
			printf("please try again\n");
		}
	}while ( number < 1);
	
	switch (number){
		case 1: printf("one"); break;
		case 2: printf("two"); break;
		case 3: printf("three"); break;
		case 4: printf("four"); break;
		case 5: printf("five"); break;
		case 6: printf("six"); break;
		case 7: printf("seven"); break;
		case 8: printf("eight"); break;
		case 9: printf("nine"); break;
		default: printf("don't know'"); break;
	}
	
	return 0;
}