#include <stdio.h>
#include <math.h>

// Function Prototypes
void symmetricNumbers( int n );
void perfectSquareNumbers( int n );
void primeNumbers( int n );
void perfectNumber( int n );
void digitsIncreasing( int n );
void digitsDecreasing( int n );

void menu()
{
	printf("\n------------Lâm Anh Khôi - SE203458----------------");
	printf("\n0. Exit");
	printf("\n1. Symmetric numbers of n");	
	printf("\n2. Perfect square numbers of n");
	printf("\n3. Prime numbers of n");
	printf("\n4. Perfect number (also called perfect number): a number whose sum of divisors is equal to itself. of n");
	printf("\n5. Are the digits increasing in n");
	printf("\n6. Are the digits decreasing n digits");
}

int main(){
    int option,n;
	menu();
	do{
		printf("\nEnter number you want :="); scanf("%d",&n);
		if( n < 0){
			printf("Please enter new number please !!!");
		}
	}while( n < 0 );
	
	do{
		printf("\nChoose your option you want :="); scanf("%d",&option);
		switch (option){
			case 1:
				symmetricNumbers(n);
				break;
			case 2:
                perfectSquareNumbers(n);
				break;
			case 3:
				primeNumbers(n);
				break;
			case 4:
				perfectNumber(n);
				break;
			case 5:
				digitsIncreasing(n);
				break;
			case 6:
				digitsDecreasing(n);
				break;	
		}
	}while( option != 0 );
	printf("You are exit the process");
	return 0;
}

void symmetricNumbers( int n ){
    int count = 0, temp = n, result = 0;
    
    while ( temp != 0 ) {
        count = temp % 10;
        result += count;
        result *= 10;
        temp = temp / 10;
    }
    result /= 10;
    
    if ( result == n )  {
        printf("true");
    } else {
        printf("false");
    }

}

void perfectSquareNumbers( int n ){
    if ( n < 0 ){
        printf("false");
        return;
    }
    
    if ( n == 0 ){
        printf("true");
        return;
    }

    double squareRoot = sqrt(n);      
    int integerPartOfRoot = (int)squareRoot; 

    if (integerPartOfRoot * integerPartOfRoot == n) {
        printf("true");
    } else {
        printf("false");
    }
}

void primeNumbers( int n ){
    int result = 1;

    if ( n < 2){
        result = 0;
    } 
    
    for ( int i = 2; i <= sqrt(n); i++){
		if ( n % i == 0){
			result = 0;
		}
		result = 1;
	}

    if ( result == 1 ){
        printf("true");
    } else {
        printf("false");
    }
}

void perfectNumber( int n ){
    int result = 0;
    
    for( int i = 0; i < n; i++){
        if ( n % i == 0){
            result += i;
        }
    }

    if ( result == n ){
        printf("true");
    } else {
        printf("false");
    }
}

void digitsIncreasing( int n ){
    if ( n < 0 ){
        printf("false");
        return;
    } else if ( n >= 0 && n < 10){
        printf("true");
        return;
    }

    int temp = n;
    int currentDigit_fromRight;
    int previousDigit_fromRight = temp % 10; 
    temp /= 10;

    while (temp != 0) {
        currentDigit_fromRight = temp % 10; 
        if (currentDigit_fromRight < previousDigit_fromRight) {
            previousDigit_fromRight = currentDigit_fromRight; 
        } else {
            printf("false");
            return;
        }
        temp /= 10;
    }
    printf("true");
}

void digitsDecreasing( int n ){
    if ( n < 0 ){
        printf("false");
        return;
    } else if ( n >= 0 && n < 10){
        printf("true");
        return;
    }

    int temp = n;
    int currentDigit_fromRight;
    int previousDigit_fromRight = temp % 10; 
    temp /= 10;

    while (temp != 0) {
        currentDigit_fromRight = temp % 10; 
        if (currentDigit_fromRight > previousDigit_fromRight) {
            previousDigit_fromRight = currentDigit_fromRight; 
        } else {
            printf("false");
            return;
        }
        temp /= 10;
    }
    printf("true");
}

