#include <stdio.h>
#include <string.h>

int findSubstring(char main_str[], char sub_str[]) {
    int main_len = strlen(main_str);
    int sub_len = strlen(sub_str);
    int i, j;

    for (i = 0; i <= main_len - sub_len; i++) {
        for (j = 0; j < sub_len; j++) {
            if (main_str[i + j] != sub_str[j]) {
                break; 
            }
        }
        
        if (j == sub_len) {
            return i;
        }
    }

    return -1;
}

int main() {
    char main_str[200];
    char sub_str[100];

    printf("Nhap vao chuoi chinh: ");
    gets(main_str);

    printf("Nhap vao chuoi con can tim: ");
    gets(sub_str);

    int position = findSubstring(main_str, sub_str);

    if (position != -1) {
        printf("\nTim thay chuoi con tai vi tri (chi so): %d\n", position);
    } else {
        printf("\nKhong tim thay chuoi con trong chuoi chinh.\n");
    }

    return 0;
}