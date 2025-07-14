#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char dest_str[100]; 
    int i = 0;

    printf("nhap chuoi 1:= ");
    gets(str1);

    while (str1[i] != '\0') {
        dest_str[i] = str1[i];
        i++;
    }

    dest_str[i] = '\0';

    printf("\nChuoi goc: %s", str1);
    printf("\nChuoi da duoc sao chep: %s", dest_str);

    return 0;
}