#include <stdio.h>
int main()
{
	int a,b;
	float x;
	printf("Input a,b := ");
	scanf("%d, %d", &a,&b);
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
		printf("result := %d", &x);	
	}

return 0;
}