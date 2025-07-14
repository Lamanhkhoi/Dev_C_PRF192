#include <stdio.h>
#include <ctype.h> 
#include <string.h>

int main() {
    char str[200];

    printf("nhap chuoi 1:= ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

    printf("\nChuoi sau khi chuyen doi: %s", str);

    return 0;
}