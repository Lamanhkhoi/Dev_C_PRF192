#include <stdio.h>
#include <string.h>

int compareStrings(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] == str2[i]) {
        if (str1[i] == '\0') {
            return 0;
        }
        i++;
    }

    return str1[i] - str2[i];
}

int main() {
    char str1[100];
    char str2[100];

    printf("nhap chuoi 1:= ");
    gets(str1);
    printf("nhap chuoi 2:= ");
    gets(str2);

    int result = compareStrings(str1, str2);

    if (result == 0) {
        printf("\nHai chuoi giong het nhau.\n");
    } else if (result < 0) {
        printf("\nChuoi thu nhat nho hon chuoi thu hai.\n");
    } else {
        printf("\nChuoi thu nhat lon hon chuoi thu hai.\n");
    }

    return 0;
}