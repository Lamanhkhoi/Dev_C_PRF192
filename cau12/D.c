#include <stdio.h>

int main(){
	int n;
	int results = 1;
	
	printf("Input range n :=");scanf("%d",&n);
	
	for (int i = 1; i <= n; i++){
		results *= i;
	}
	
	printf("Answer := %d", results);
	return 0;
}