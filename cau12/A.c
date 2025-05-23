#include <stdio.h>

int main(){
	int n;
	int results = 0;
	
	printf("Input range n :=");scanf("%d",&n);
	
	for (int i = 0; i <= n; i++){
		results += i;
	}
	
	printf("Answer := %d", results);
	return 0;
}