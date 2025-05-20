#include <stdio.h>
int main()
{
	float a,b;
	float x;
	printf("Input a,b := ");
	scanf("%f %f", &a,&b);
	if (a == 0){
		if ( b == 0 ){
			printf("PTR VSN");
			return 0;
		} else {
			printf("PTR VN");
			return 0;
		}
	} else {
		x = -b / a;
		printf("result := %f", x);	
	}

return 0;
}