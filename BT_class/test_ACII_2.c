#include<stdio.h>
int main(){
	int x,y,result;
	char op;
	
	printf("Input: x,y, op (+,-,*,/,%) :");
	scanf("%d %d",&x,&y);
	fflush(stdin);
	printf("input operator:");
	op = getchar();
	
	switch(op){
		case '+':
			result = x + y;
			printf("Answer: %d + %d = %d",x,y,result);
			break;
		case '-':
			result = x - y;
			printf("Answer: %d - %d = %d",x,y,result);
			break;
		case '*':
			result = x * y;
			printf("Answer: %d * %d = %d",x,y,result);
			break;
		case '/':
			result = x*1.0 / y*1.0;
			printf("Answer: %d / %d = %f",x,y,result);
			break;
		case '%':
			result = x % y;
			printf("Answer: %d %% %d = %d",x,y,result);
			break;
		default:
			printf("Invaild answer");
			return 0;
	}
	return 0;
}