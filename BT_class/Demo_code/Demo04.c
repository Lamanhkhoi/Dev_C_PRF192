#include <stdio.h>
#define max 10
#include <stdlib.h>
#include <time.h>

void inputSize(int *r, int *c);
void printMatrix(int r, int c, int a[r][c]);
void printMatrixAddress(int r, int c, int a[r][c]);
int sumElement( int r, int c, int a[r][c]);
int countEven( int r, int c, int a[r][c]);
void printEvenNumber( int r, int c, int a[r][c]);

int main(){
	int r,c,i,j;
	inputSize(&r,&c);
	int a[r][c];
	srand(time(NULL));
	for (i = 0; i < r; i++){
		for ( j = 0; j < c; j++){
//			printf("a[%d][%d]:= ", i,j);
//			scanf("%d", &a[i][j]);
		a[i][j] = -10 + rand() % (50 +1 -10);
		}
	}
	printMatrix(r,c,a);
	printMatrixAddress(r,c,a);
	printf("\nSum:= %d",sumElement(r,c,a));
	printf("\nCount even number:= %d\n", countEven(r,c,a));
	printEvenNumber(r,c,a);
	return 0;
}

void inputSize(int *r, int *c){
	do{
		printf("Input rows:= ");scanf("%d", r);
	printf("Input columns:= ");scanf("%d", c);
	}while( *r < 1 || *r > max || *c < 1 || *c > max);
	return;
}

void printMatrix(int r, int c, int a[r][c]){
	printf("Array:\n");
	for (int i = 0; i < r; i++ ){
		for (int j = 0; j < c; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

void printMatrixAddress(int r, int c, int a[r][c]){
	printf("Array address:\n");
	for (int i = 0; i < r; i++ ){
		for (int j = 0; j < c; j++){
			printf("%d\t", &a[i][j]);
		}
		printf("\n");
	}
}

int sumElement( int r, int c, int a[r][c]){
	int sum = 0;
	for (int i = 0; i < r; i++ ){
		for (int j = 0; j < c; j++){
			sum += a[i][j];
		}
	}
	return sum;
}

int countEven( int r, int c, int a[r][c]){
	int count = 0;
	for (int i = 0; i < r; i++ ){
		for (int j = 0; j < c; j++){
			if (a[i][j] % 2 == 0 ){
				count++;
			}
		}
	}
	return count;
}

void printEvenNumber( int r, int c, int a[r][c]){
	printf("Even number:= ");
	for (int i = 0; i < r; i++ ){
		for (int j = 0; j < c; j++){
			if (a[i][j] % 2 == 0 ){
				printf("%d\t", a[i][j]);
			}
		}
	}
}