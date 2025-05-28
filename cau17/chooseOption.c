#include<stdio.h> 
#include<math.h> 

void menu()
{
	printf("\n------------ho va ten - mssv----------------");
	printf("\n0. Exit");
	printf("\n1. Largest numeric character of n");	
	printf("\n2. Smallest numeric character digit of n");
	printf("\n3. Sum of numeric characters of n");
	printf("\n4. Find the opposite of n");
	printf("\n5. Count the number of numeric characters in n");
	printf("\n6. Calculate the product of n digits");
	printf("\n7. Count the number of odd-numbered characters in n");
	printf("\n8. Calculate the sum of even-numbered characters in n");
}

int main()
{
	int option,n;
	menu();
	do{
		printf("\nEnter number you want :="); scanf("%d",&n);
		if( n < 0){
			printf("Please enter new number please !!!");
		}
	}while( n < 0 );
	
	do
	{
		printf("\nChoose your option you want :="); scanf("%d",&option);
		switch (option){
			case 1:
				printf("%d", largestNumericCharacter(n));
				break;
			case 2:
				printf("%d", smallestNumericCharacter(n));
				break;
			case 3:
				printf("%d", sumOfNumericCharacters(n));
				break;
			case 4:
				printf("%d", findTheOppsite(n));
				break;
			case 5:
				printf("%d", countCharacters(n));
				break;
			case 6:
				printf("%d", calculateTheProduct(n));
				break;
			case 7:
				printf("%d", countTheNumberOfOdd(n));
				break;
			case 8:
				printf("%d", calculateTheSumOfEven(n));
				break;	
		}
	}while(option != 0);
	printf("You are exit the process");
	return 0;
}

//----------------------------------------

int largestNumericCharacter(int n){
	int temp = n,count = 0, result = 0;
	while( temp != 0 ){
		count = temp % 10;
		if ( result < count){
			result = count;
		}
		temp = temp / 10;
	}
	return result;
}

int smallestNumericCharacter(int n){
	int temp = n,count = 0, result  ;
	count = temp % 10;
	result = count;
	while( temp != 0 ){
		count = temp % 10;
		if ( result > count){
			result = count;
		}
		temp = temp / 10;
	}
	return result;
}

int sumOfNumericCharacters(int n){
	int temp = n,count = 0, result = 0 ;
	while( temp != 0 ){
		count = temp % 10;
		result += count;
		temp = temp / 10;
	}
	return result;
}

int findTheOppsite(int n){
	int sum = 0,count = 0, tam = 0;
	tam = n;
	while(tam != 0){
		int tam1 = tam / 10;
		sum += (tam - (tam1 * 10));
		sum *= 10;
		tam /= 10;
	}
	sum /= 10;
	return sum;
}

int countCharacters(int n){
	int temp = n,count = 0, result = 0;
	while( temp != 0 ){		
		if ( temp != 0 ){
			result++;
		}
		temp = temp / 10;
	}
	return result;
}

int calculateTheProduct(int n){
	int temp = n,count = 0;
	double result = 1;

	while( temp != 0 ){		
		count = temp % 10;
		if ( temp != 0 ){
			result *= count;
		}
		temp = temp / 10;
	}
	return result;
}

int countTheNumberOfOdd(int n){
	int temp = n,count = 0;
	int result = 0;

	while( temp != 0 ){		
		count = temp % 10;
		if ( temp != 0 && count % 2 != 0){
			result++;
		}
		temp = temp / 10;
	}
	return result;
}

int calculateTheSumOfEven(int n){
	int temp = n,count = 0;
	int result = 0;

	while( temp != 0 ){		
		count = temp % 10;
		if ( temp != 0 && count % 2 == 0){
			result += count;
		}
		temp = temp / 10;
	}
	return result;
}
