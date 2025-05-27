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
		return 1;
	}
}

int main(){
	int a;
	printf("a :=");scanf("%d",&a);
	if (isPrimeNumber(a) == 0){
		printf("Number %d is not a prime number", a);
	}else {
		printf("Number %d is a prime number", a);
	}
	return 0;
}