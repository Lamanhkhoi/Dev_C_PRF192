#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 50

int InputSize();
void InputArray(int *a, int n);
void AutoInputArray(int *a, int n, int x1, int x2);
void PrintArray(const int *a, int n);
int firstLinearSearch( int x, int *a, int n);
int lastLinearSearch( int x, int *a, int n);
int countXInArray(int x, int *a, int n);
void SelectionSort(int *a, int n){
	for(int i = 0; i < n; i++){
		int csmin = i;
		for (int j = i + 1; j <= n - 1; j++){
			if( a[csmin] > a[j])
				csmin = j;
		}
		if ( i < csmin)
			Swap(&a[i],&a[csmin]);
	}
}
void S

void Swap(int *x, int *y){
	int t = *x;
	*x = *y;
	*y = t;
}
//void menu();
//void XLMN();
int main(){
	int *a,n;
	n = InputSize();
	a = (int *)(calloc(n,sizeof(int)));
	if ( a == NULL ){
		printf("\ncap phat bo nho that bai");
		return 1;
	} else {
		printf("\nPhat bo nho thanh cong");
	}
	printf("\mang:=");
//	InputArray(a,n);
	AutoInputArray(a,n,0,10);
	printf("xuat mang:=");
	PrintArray(a,n);
	int value;
	printf("\nnhap gia tri muon tim o dau:= ");scanf("%d",&value);
	int vd = firstLinearSearch(value,a,n);
	if ( vd == -1){
		printf("\n khong tim thay gia tri %d trong mang.",value);
	}else{
		printf("\n gia tri %d nam o vi tri thu %d trong mang.",value, vd);
	}
	
	printf("\nnhap gia tri muon tim o cuoi:= ");scanf("%d",&value);
	int vc = lastLinearSearch(value,a,n);
	if ( vc == -1){
		printf("\n khong tim thay gia tri %d trong mang.",value);
	}else{
		printf("\n gia tri %d nam o vi tri thu %d trong mang.",value, vc);
	}
	printf("\nnhap gia tri muon dem:= ");scanf("%d",&value);
	int countValue;
	countValue = countXInArray(value,a,n);
	printf("%d",countValue);
	printf("\nafter sort:");
	SelectionSort(a,n);
	PrintArray(a,n);
	free(a);
	return 1;
}

int InputSize(){
	int n;
	do{
		printf("size from 1 to 50 :=");
		scanf("%d",&n);
	}while( n < 1 || n > max );
	return n;
}

void InputArray(int *a, int n){
	int i;
	for ( i = 0; i < n; i++){
		scanf("%d", a + i);
	}
}

void PrintArray(const int *a, int n){
	int i;
	for ( i = 0; i < n; i++){
		printf("%d\t", *(a+i));
	}
}

void AutoInputArray(int *a, int n, int x1, int x2){
	int i;
	srand(time(NULL));
	for ( i = 0; i < n; i++){
		*(a+i) = x1 + rand() % (x2 +1 -x1);
	}
}

int firstLinearSearch( int x, int *a, int n){
	int i;
	for ( i = 0; i < n; i++){
		if ( x == *(a + i)){
			return i;
		}
		
	}
	return -1;
}

int lastLinearSearch( int x, int *a, int n){
	int i;
	for ( i = n - 1; i >= 0; i--){
		if ( x == *(a + i)){
			return i;
		}
	}
	return -1;
}

int countXInArray(int x, int *a, int n){
	int count = 0,i;
	for ( i = 0; i < n; i++){
		if ( x == *(a + i)){
			count++;
		}
	}
	return count;
}