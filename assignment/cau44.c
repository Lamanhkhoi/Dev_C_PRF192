#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    char reverse[100];
    int length = 0;
    printf("nhap ten ban:= ");
    gets(name);
    
    for ( int i = strlen(name) - 1; i >= 0; i-- ){
        reverse[length] = name[i];
        length++;
    }
    reverse[length] = '\0';
    puts(reverse);
}