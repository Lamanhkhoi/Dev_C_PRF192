#include <stdio.h>

int main(){
	int height;
	
	do {
		printf("Input height :=");scanf("%d",&height);
		if ( height < 0){
			printf("Please try again !!!\n");
		}
	}while( height < 0);
	
	
	switch (choose)
}

int soildTriangles( int height){
	for ( int i = 0; i <= height; i++){
		for ( int j = 0; j <= height - i - 1; j++){
			printf(" ");
		}
		for ( int k = 0; k <= 2 * i; k++){
			printf("*");
		}
	printf("\n");
	}
	return 0;
}

int hollowTriangles( int height){
	for ( int i = 0; i <= height; i++){
		for ( int j = 0; j <= height - i - 1; j++){
			printf(" ");
		}
		for ( int k = 0; k <= 2 * i; k++){
			if (i == height || k == 0 || k == 2 * i){
				printf("*");
			}else {
				printf(" ");	
			}
			
		}
	printf("\n");
	}
	return 0;
}