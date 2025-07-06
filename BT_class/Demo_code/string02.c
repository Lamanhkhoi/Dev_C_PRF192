#include <stdio.h>
#include <string.h>


void menu(){
	printf("0. Exit\n");
	printf("1.");
	printf("2.");
	printf("3.");
	printf("4.");
	printf("5.");
	printf("6.");
	printf("7.");
	printf("8.");
	printf("9.");
	printf("10.");
	printf("11.");
	printf("");
}
int main(){
	char a[101],b[101];
	printf("Input s string: ");
	scanf("%[^\n]",&a);
	printf("%s", a);
	fflush(stdin);
	printf("\nInput string b: ");
	gets(b);
	puts(b);
	return 1;
}