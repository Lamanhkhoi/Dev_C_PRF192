/*
Tên: Lâm Anh Khôi
MSSV: SE203458
*/
#include <stdio.h>
#define Max 100

void input(int *a, int *pn);
int max(int *a, int n);
void print(int *a, int n);
void printEven(int *a, int n);

int main(){
	int a[Max];
	int n,i;
	int maxVal;
	input(a, &n);
	maxVal = max(a,n);
	printf("%d\n",n);
	printf("Max value := %d\n",maxVal);
	print(a,n);
	printEven(a,n);
	return 0;
}

void input(int *a, int *pn){
	*pn = 0;
	printf("Enter maximum %d elements, 0 for termination\n",Max);
	int x;
	do{
		scanf("%d",&x);
		if (x != 0 ) a[(*pn)++] = x;
	}while ( x != 0 && *pn < Max );
}

int max(int *a, int n){
	int max_value = a[0];
	int i;
	for ( i = 0; i < n; i++){
		if ( max_value < *(a + i)){
			max_value = *(a + i);
		}
	}
	return max_value;
}

void print(int *a, int n){
	int i;
	printf("Array: \n");
	for ( i = 0; i < n; i++){
		printf("%d\t", *(a + i));
	}
}

void printEven(int *a, int n){
	int i;
	printf("\nEven number:");
	for ( i = 0; i < n; i++){
		if ( *(a + i) % 2 == 0 ){
			printf("%d\t", *(a + i));
		}
	}
}
