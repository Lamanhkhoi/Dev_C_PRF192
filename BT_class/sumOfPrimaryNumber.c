#include <stdio.h>

int main(){
	int n, soNguyenTo = 1;
	int result = 0;
	
	printf("Input range n :=");scanf("%d",&n);
	
	for( int i = 2; i <= n; i++){
		soNguyenTo = 1;
		if (i == 2){
			soNguyenTo = 1;
		}else if (i % 2 == 0 && i >2){
			soNguyenTo = 0;
		}else {
			for ( int j = 3; j <= i/2; j += 2){
				if (i % j == 0){
					soNguyenTo = 0;
					break;
				}
			}
		}
		if (soNguyenTo == 1){
			result += i;
		}
	}
	
	printf("Answer:= %d",result);
	
	
	return 0;
	
}