#include <stdio.h>

int main(){
	float a,b,c;
	printf("Input side a of triangle:=");
	scanf("%f", &a);
	printf("Input side b of triangle:=");
	scanf("%f", &b);
	printf("Input side c of triangle:=");
	scanf("%f", &c);
	
	if ((a + b) <= c || (a + c) <= b || (b + c) <= a || a == 0 || b == 0 || c == 0){
		printf("it is not a triangle !!!");
		return 0;
	} if (a == b && b == c){
		printf("It is an equilateral triangle (tam giac deu).\n");
	}else if ( (a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a) ){
		if (a == b || b == c || c == a){
			printf("It is an isosceles right triangle (tam giac vuong can).\n");
		} else {
			printf("It is a right triangle (tam giac vuong, khong can).\n");
		}
	} else if (a == b || b == c || c == a){
			printf("tam giac can khong deu");
		} else {
			printf("tam giac thuong");
		}

	return 0;
}