#include <stdio.h>
void soildTriangles( int height){
	for ( int i = 0; i <= height; i++){
		for ( int j = 0; j <= height - i - 1; j++){
			printf(" ");
		}
		for ( int k = 0; k <= 2 * i; k++){
			printf("*");
		}
	printf("\n");
	}
}

void hollowTriangles( int height){
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
}

int main(){
	int height;
	
	do {
		printf("Input height :=");scanf("%d",&height);
		if ( height < 0){
			printf("Please try again !!!\n");
		}
	}while( height < 0);
	
	printf("In tam giac rong thi chon 1");
	printf("In tam giac nguyen ven chon 2");
	scanf("%d",&choose);
	switch (choose){
		case 1:
			soildTriangles( height )
	}

	return 0;
}

