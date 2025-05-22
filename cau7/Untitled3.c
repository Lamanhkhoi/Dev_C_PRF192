#include <stdio.h>

/*Write a program that inputs integers until it reaches 0 and ends. Count how many even
numbers have been entere*/

int main(){
	int number, even_count = 0;
	
	printf("Input the number (enter 0 to end): ");
	scanf("%d", &number);
	while ( number != 0) {
		if ( number % 2 == 0){
			even_count++;
		}
		printf("Input the number (enter 0 to end): ");
        scanf("%d", &number);
	}
	printf("The number of even number entered := %d", even_count);
	return 0;
}