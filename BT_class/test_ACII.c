#include <stdio.h>
int main(){
	char c;
	int x;
	printf("x= ");
	scanf("%d",&x);
	printf("input a character: ");
	fflush(stdin);// xo� b? nh? d?m
	c = getchar();
	printf("%c - %d - %o - %x", c,c,c,c);
	printf("\nx = %d",x);
	return 0;
}