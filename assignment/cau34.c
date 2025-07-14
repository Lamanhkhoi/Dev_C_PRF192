#include <stdio.h>

void printSubArray(int arr[], int start, int end) {
    printf("[ ");
    for (int i = start; i <= end; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

void findIncreasingSubsequences(int arr[], int n) {
    if (n <= 1) {
        return; 
    }

    int start = 0; 
    printf("Cac day con tang lien tiep la:\n");

    for (int i = 1; i < n; i++) {
        if (arr[i] <= arr[i - 1]) {
            if (i - 1 > start) {
                printSubArray(arr, start, i - 1);
            }
            start = i;
        }
    }

    if (n - 1 > start) {
        printSubArray(arr, start, n - 1);
    }
}

int main() {
    int arr[] = {2, 3, 5, 1, 6, 7, 4, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    findIncreasingSubsequences(arr, n);

    return 0;
}