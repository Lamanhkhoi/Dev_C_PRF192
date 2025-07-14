#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    char str2[100];

    printf("nhap chuoi 1:= ");
    gets(str1);
    printf("nhap chuoi 2:= ");
    gets(str2);
    
    int i = 0; 
    int j = 0; 

    while (str1[i] != '\0') {
        i++;
    }

    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
    puts(str1);
}