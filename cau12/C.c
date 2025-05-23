#include <stdio.h>

int main(){
	int n;
	float results = 0;
	
	printf("Input range n :=");scanf("%d",&n);
	
	for (int i = 1; i <= n; i++){
		results += 1.0/i;
	}
	
	printf("Answer := %f", results);
	return 0;
}