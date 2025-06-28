#include <stdio.h>

typedef struct {
		int d;
		int m;
		int y;
}date;

int main(){
	date d1;
	printf("Input date: \n");
	printf("day:= "); scanf("%d", &d1.d);
	printf("month:= "); scanf("%d", &d1.m);
	printf("year:= "); scanf("%d", &d1.y);
	printf("\n%d/%d/%d",d1.d,d1.m,d1.y);
	return 0;
}