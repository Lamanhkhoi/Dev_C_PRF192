#include <stdio.h>
#include <stdlib.h>

int doesArrayExist(int arr[], int size) {
    if (arr == NULL) {
        return 0; 
    }

    if (size <= 0) {
        return 0; 
    }

    return 1;
}

int main() {
    int mang1[] = {10, 20, 30};
    int kichThuoc1 = 3;

    int* mang2 = NULL;
    int kichThuoc2 = 5;

    int mang3[] = {};
    int kichThuoc3 = 0;

    printf("Kiem tra mang1: %d\n", doesArrayExist(mang1, kichThuoc1)); 
    printf("Kiem tra mang2: %d\n", doesArrayExist(mang2, kichThuoc2)); 
    printf("Kiem tra mang3: %d\n", doesArrayExist(mang3, kichThuoc3)); 

    return 0;
}