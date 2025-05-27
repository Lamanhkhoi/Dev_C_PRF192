#include <stdio.h>
#include <math.h>

int isPrimeNumber(int a){
	if (a < 2){
		return 0;
	}
	for ( int i = 2; i <= sqrt(a); i++){
		if ( a % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int a, total = 0;
	do{
		printf("Enter number ( enter 0 to stop) :=");scanf("%d", &a);
		if ( isPrimeNumber(a) == 1){
			total++;
		}
	}while (a != 0 );
	printf("Total prime number := %d",total);
	return 0;
}