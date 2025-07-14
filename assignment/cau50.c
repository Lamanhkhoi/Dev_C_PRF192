#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int frequency[256] = {0};

    printf("nhap chuoi 1:= ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        frequency[(int)str[i]]++;
    }

    printf("\nTan suat xuat hien cua tung ky tu:\n");
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            if (i == '\n') {
                continue;
            }
            printf("Ky tu '%c': %d lan\n", i, frequency[i]);
        }
    }

    return 0;
}