#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	float Delta,x1,x2;
	do {
		printf("Input a:= ");
		scanf("%d",&a);
		if (a == 0){
			printf(" YOU SO FUCKING STUPID!!! Input a again !!!\n");
		}
	}while(a == 0);
		printf("Input b:= ");
		scanf("%d",&b);
		printf("Input c:= ");
		scanf("%d",&c);
	
	Delta = b^2 - (4*a*c);
	
	if ( Delta < 0){
		printf("phuong trinh %dx^2 + %dx + %d vo nghiem", a,b,c);
	} else if ( Delta == 0 ){
		x1 = -b / (2 * a);
		printf("phuong trinh %dx^2 + %dx + %d co nghiem kep x1 va x2 bang := %f", a,b,c,x1);
	} else if ( Delta > 0){
		x1 = (-b + sqrt(Delta)) / (2*a);
		x2 = (-b - sqrt(Delta)) / (2*a);
		printf("phuong trinh %dx^2 + %dx + %d co 2 nghiem la:\n", a,b,c);
		printf("x1 := %f\n", x1);
		printf("x2 := %f\n", x2);
	}

return 0;
}