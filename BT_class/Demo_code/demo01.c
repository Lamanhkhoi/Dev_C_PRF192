#include <stdio.h>
#define max 50
#include <stdlib.h>
#include <math.h>
void printArray(int a[], int n){
	int i;
	for (i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	return 1;
}

void inputArray(int *a, int n){
	int i;
	for (i=0;i<n;i++){
		printf("a[%d]\t",i);
		scanf("%d",&a[i]);
	}
	return 1;
}

void autoInputArray(int *a, int n, int x, int y){
	int i;
	srand(time(NULL));
	for (i=0; i<n; i++){
		a[i] = x = rand()%(y + 1 -x);
	}
}

int sumArray(int *a, int n){
	int i,sum=0;
	for(i=0; i<n; i++){
		sum += a[i];
	}
	return sum;
}

int isPrime(int n){
	if(n < 2) return 0;
	for ( int i = 2; i*i <= n; i++){
		if ( n % i == 0){
			return 0;
		}
	}
	return 1;
	
}

int countPrime(int *a, int n){
	int i, count = 0;
	for (i=0; i<n; i++){
		if(isPrime(a[i]) == 1){
			count++;
		}
	}
	return count;
}

int main(){
	int a[max];
	int n,i;
	do{
		printf("input size from 1 to %d",max);scanf("%d",&n);
	}while(n>max || n<1);
	inputArray(a,n);
	printArray(a,n);
	
//	int b[] = {5,6,7,8,9};
//	printf("\nsize if a = %d", sizeof(a));
//	printf("\nsize if b = %d", sizeof(b));
//	printf("\nsize if int = %d", sizeof(int));
//	printf("\nso pt cua b = %d\n", sizeof(b)/sizeof(int));
//	int m = sizeof(b)/sizeof(int);
//	printArray(b,m);
//	printf("\n");
//	printf("\n");
//	for (i=0; i < max-1; i++){
//		printf("%d\t",a[i]);
//	}
	int x;
	printf("input range:=");scanf("%d",&x);
	printf("Array:\n");
	autoInputArray(a,n,x,100);
	printArray(a,n);
	printf("Sum result:= %d",sumArray(a,n));
	printf("Count:= %d",countPrime(a,n));
	return 1;
}