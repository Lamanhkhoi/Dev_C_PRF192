#include <stdio.h>

int main(){
	int n,sum = 0,count = 0, tam = 0;
	
	printf("Input n :=");scanf("%d",&n);
	tam = n;
	while(tam != 0){
		int tam1 = tam / 10;
		sum += (tam - (tam1 * 10));
		sum *= 10;
		tam /= 10;
	}
	sum /= 10;
	
	printf("%d",sum);
	return 0;
}