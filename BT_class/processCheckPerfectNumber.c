#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int uocCuaN( int n );
bool perfectNumber( int n );
int countPerfectNumber( int n );
float avePerfectNumber( int n );

int main(){
	int n,option;
	do{
		printf("Input n:=");scanf("%d", &n);
		if ( n < 0 ){
			printf("Please try again !!!");
		}
	}while( n <= 0 );
	
	uocCuaN(n);
	
	if ( perfectNumber(n) == true){
		printf("true\n");
	}else{
		printf("false\n");
	}
	
	printf("The perfect number from 1 to %d := %d\n",n,countPerfectNumber(n));
	
	printf("Average of perfect number := %.2f", avePerfectNumber(n));
	
	
}

int uocCuaN( int n ){
	int result, i;
	for( i = 1; i <= n; i++){
		if ( n % i == 0){
			result = i;
			printf("%d \t", result);
		}
	}
}

bool perfectNumber( int n ){
	int i, result = 0;
	for ( i = 1; i < n; i++){
		if ( n % i == 0){
			result += i;
		}
	}
	
	if ( result == n ){
		return true;
	} else {
		return false;
	}
}

int countPerfectNumber( int n ){
	int i, count = 0;
	for ( i = 1; i <= n; i++){
		if ( perfectNumber(i) == true){
			count++;
		}
	}
	return count;
}

float avePerfectNumber( int n ){
	int i, sum = 0;
	for ( i = 1; i <= n; i++){
		if ( perfectNumber( i ) == true ){
			sum += i;
		}
	}
	
	return sum / (countPerfectNumber( n )*1.0);
}

