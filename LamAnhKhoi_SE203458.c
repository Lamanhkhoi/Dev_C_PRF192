/*
Ten: lam Anh Khoi
MSSV: SE203458
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_STRINGS 5  
#define MAX_LENGTH 101

void StringAppend(char *a, char *b); //noi 2 chuoi
int CountUpper(char *a);
int CountLower(char *a);
int CountSpace(char *a);
void ConvertString(char *a);
void InputString(char *a);

void menu(){
	printf("\n0. Exit\n");
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
	char string_array[MAX_STRINGS][MAX_LENGTH];
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
			case 5:
				{
					printf("convert string:\n");
					ConvertString(a);
					break;	
				}
			case 6:
				{
					printf("convert lower string:\n");
					printf("before: %s\n", a);
					printf("after: %s", strlwr(a));
					break;
				}
			case 7:
				{
					printf("convert upper string:\n");
					printf("before: %s\n", a);
					printf("after: %s", strupr(a));
					break;
				}
			case 8:
				{
					char c[101];
					printf("first occurrence of a substring in another string:\n");
					scanf("%[^\n]",&c);
					char *found = strstr(a,c);
					printf("the first occurrence of a substring: %ld\n", found - a);
					printf("Substring found: %s", found);
					break;
				}
			case 9:
				{
				    char strSplit[100];
				    strcpy(strSplit, a);
				    const char *delimiters = ", .-;/"; // delimiters la dau phan cach
				    char *token;
				    printf("Chuoi goc: \"%s\"\n", a);
				    token = strtok(strSplit, delimiters);
					printf("Other token found:\n");
					while (token != NULL) 
						{
					        printf("- %s\n", token);
					        token = strtok(NULL, delimiters);
			    		}
			    	break;
				}
			case 10:
				{
					InputArrayOfString(MAX_STRINGS, string_array);
					break;
				}
			case 11:
				{
					PrintArrayOfString(MAX_STRINGS, string_array);
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
	printf("String: %s\n", a);
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

void ConvertString(char *a){
	char *str;
	long num = strtol(a, &str, 10);
	printf("convert string to integer: %ld\n", num);
	printf("the rest of string: %s", str);
}


void InputArrayOfString(int num_strings, char arr[][MAX_LENGTH]) {
    printf("--- Array of string ---\n");
    for (int i = 0; i < num_strings; i++) {
        printf("Input string %d: ", i + 1);
        scanf(" %100[^\n]", arr[i]);
        getchar(); 
    }
    printf("\n-----------------------------\n");
}

void PrintArrayOfString(int num_strings, char arr[][MAX_LENGTH]) {
    printf("\n--- Print array had input ---\n");
    for (int i = 0; i < num_strings; i++) {
        printf("%d. %s\n", i + 1, arr[i]);
    }
    printf("\n-----------------------------\n");
}
