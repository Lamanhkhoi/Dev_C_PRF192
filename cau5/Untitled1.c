#include <stdio.h>


int main(){
	int min, max;
	int array[1000];
	
	for ( int i = 0; i < 4; i++ ){
		printf("Input number :=");
		scanf("%d", &array[i]);
	}
	
	for ( int i = 0; i < 4; i++ ){
		if ( array[i] > array[i+1] ){
			max = array[i];
		}
		if ( array[i] < array[i+1] ){
			min = array[i];
		}
	}
	
	printf("The largest number := %d\n", max);
	printf("The smallest number := %d", min);
	return 0;
}