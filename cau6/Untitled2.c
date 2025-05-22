#include <stdio.h>

int main(){
	int number;
	printf("Input every number you want :=");
	scanf("%d",&number);
	if ( number % 2 == 0 ){
		printf("This number: %d is even !!!", number);
	} else {
		printf("This number: %d is odd !!!", number);
	}
	return 0;
}