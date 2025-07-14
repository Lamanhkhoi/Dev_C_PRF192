#include <stdio.h>
#include <string.h>
int main(){
    char name[100];
    int length = 0;
    printf("nhap ten ban:= ");
    gets(name);
    while( name[length] != '\0'){
        length++;
    }

    printf("do dai cua chuoi la %d", length);
}