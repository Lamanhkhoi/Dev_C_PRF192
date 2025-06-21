#include <stdio.h>
#define max 50
int InputSize();
void InputArray(int *a, int n);
void PrintArray(const int a[], int n);
void FindMinMax(const int *a, int n, int *pmin, int *pmax);

int main(){
	int a[max],n;
	n = InputSize();
	printf("n = %d\n", n);
	InputArray(a,n);
	PrintArray(a,n);
	int min_value, max_value;
	FindMinMax(a,n,&min_value,&max_value);
	printf("Max value := %d",max_value);
	printf("Min value := %d",min_value);
	return 0;
}

int InputSize(){
	int n;
	printf("Input size of array:=");scanf("%d", &n);
	return n;
}

	void InputArray(int *a, int n){
	int i;
	for (i = 0; i < n; i++){
		printf("Input array value at a[%d]:=", i);scanf("%d",&a[i]);
	}
	return 1;
}

void PrintArray(const int a[], int n){
	int i;
	for (i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	return 1;
}

void FindMinMax(const int *a, int n, int *pmin, int *pmax){
	int i;
	*pmin = a[0];
	*pmax = a[0];
	for ( i = 0; i < n; i++){
		if ( *pmax < a[i] ){
			*pmax = a[i];
		}
	}

	for ( i = 0; i < n; i++){
		if ( *pmin > a[i] ){
			*pmin = a[i];
		}
	}
}