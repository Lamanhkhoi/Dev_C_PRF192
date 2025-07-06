#include <stdio.h>
#include <string.h>
#include <ctype.h>
void StringAppend(char *a, char *b); //noi 2 chuoi
int CountUpper(char *a);
int CountLower(char *a);
int CountSpace(char *a);
void ConvertString(char *a);
void InputString(char *a);
void menu(){
	printf("0. Exit\n");
	printf("1. Append string b after string a\n");
	printf("2. Count upper characters\n");
	printf("3. Count lower characters\n");
	printf("4. Count space characters\n");
	printf("5. convert string\n");
	printf("6. convert lower string\n");
	printf("7. convert upper string\n");
	printf("8. search the first occurrence of a substring in another string\n");
	printf("9. split the string into small tokens based on a set of delimiter characters\n");
	printf("10. input array of string\n");
	printf("11. print array of string\n");
	
	printf("What is your option? ");
}

int main(){
	char a[101];
	int option;
	InputString(a);
	printf("%s\n",&a);
	do
	{
		menu();
		scanf("%d",&option);
		fflush(stdin);
		switch (option)
		{
			case 0: return 1;
			case 1:
				{
					char b[101];
					StringAppend(a,b);
					break;
				}
			case 2: 
				{
					printf("%d upper characters\n",CountUpper(a));
					break;
				}	
			case 3:
				{
					printf("%d lower characters\n",CountLower(a));
					break;	
				}
			case 4:
				{
					printf("%d space characters\n",CountSpace(a));
					break;
				}
		}
		
	}while (option!=0);
	
	
	return 1;
}
void InputString(char *a){
	fflush(stdin);
	printf("Input string a: ");
	scanf("%[^\n]",a); 
}
void StringAppend(char *a, char *b){
	printf("Input string b:= ");
	scanf("%[^\n]",b);
	fflush(stdin);
	strcat(a,b);
}

int CountUpper(char *a){
	int i,count = 0;
	for ( i = 0; a[i] != '\0' ; i++ ){
		if (isupper(a[i])) {
			count++;
		}
	}
	return count;
}

int CountLower(char *a){
	int i,count = 0;
	for ( i = 0; a[i] != '\0' ; i++ ){
		if (islower(a[i])) {
			count++;
		}
	}
	return count;
}

int CountSpace(char *a){
	int i,count = 0;
	for ( i = 0; a[i] != '\0' ; i++ ){
		if ( a[i] == ' ') {
			count++;
		}
	}
	return count;
}




