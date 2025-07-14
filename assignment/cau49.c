#include <stdio.h>
#include <string.h>

int main() {
    char str1[200];
    char delimiters[] = " \t\n,"; 
    char *token;

    printf("nhap chuoi 1:= ");
    gets(str1);

    token = strtok(str1, delimiters);

    printf("\nCac token (tu) trong cau la:\n");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, delimiters);
    }

    return 0;
}