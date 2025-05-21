#include <stdio.h>
#include <ctype.h>

int main(){
	char letter;
	
	do {
		printf("Input a letter you want :=");
		scanf("%c",&letter);
		if (!isalpha(letter)){
			printf("please try again !!!\n");
	}
	}while (!isalpha(letter));
	
	if (!isupper(letter)){
		printf("Original: %c -> toupper: %c\n", letter, toupper(letter));
	} else {
		printf("Original: %c -> tolower: %c\n", letter, tolower(letter));
	}
	
	return 0;
}