#include <stdio.h>
#define Max 100

void input(int *a, int *pn);
int max(int *a, int n);
//void print(int *a, int n);
//void printEven(int *a, int n);

int main(){
	int a[Max];
	int n,i;
	int maxVal;
	input(a, &n);
//	maxVal = max(a,n)
	printf("%d",n);
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
	
}