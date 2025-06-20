#include <stdio.h>

int countDigit(){
	char c;
	int count = 0;
	printf("input character (enter ! to stop process):");
	do{
		scanf("%c",&c)
//		c = getchar();
		if ( c >= '0' && c <= '9') count++;
	}while(c != '!');
	
	return count;
}

int main()
{
	printf("count := %d",countDigit());
	return 1;
}