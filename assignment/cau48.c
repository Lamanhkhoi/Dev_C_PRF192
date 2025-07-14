#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return 0; 
        }
        left++;
        right--;
    }

    return 1; 
}

int main() {
    char str1[100];

    printf("nhap chuoi 1:= ");
    gets(str1);
    
    int len = strlen(str1);
    if (len > 0 && str1[len - 1] == '\n') {
        str1[len - 1] = '\0';
    }

    if (isPalindrome(str1)) {
        printf("Chuoi %s la mot Palindrome.\n", str1);
    } else {
        printf("Chuoi %s KHONG phai la Palindrome.\n", str1);
    }

    return 0;
}