#include <stdio.h>
#include <math.h>

int isPrimeNumber(int a){
	if (a < 2){
		return 0;
	}
	for ( int i = 2; i*i <= a; i++){
		if ( a % i == 0){
			return 0;
		}
	}
	return 1;
}

int sumPrimeNumber(int n){
	int sum = 0, i;
	for ( i = 2; i <= n; i++){
		if (isPrimeNumber(i) == 1){
			sum += i;
		}
	}
	return sum;
}

int main(){
	int n;
	printf("n :=");scanf("%d",&n);
	int result = sumPrimeNumber(n);
	printf("%d",result);
	return 0;
}