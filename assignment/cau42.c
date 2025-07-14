#include <stdio.h>
#define N 3 

int isSymmetric(int matrix[][N], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return 0;
            }
        }
    }

    return 1; 
}

int main() {
    int symmetric_matrix[N][N] = {
        {5, 2, 3},
        {2, 6, 7},
        {3, 7, 1}
    };

    int non_symmetric_matrix[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    if (isSymmetric(symmetric_matrix, N)) {
        printf("Ma tran dau tien la ma tran doi xung.\n");
    } else {
        printf("Ma tran dau tien KHONG phai la ma tran doi xung.\n");
    }

    if (isSymmetric(non_symmetric_matrix, N)) {
        printf("Ma tran thu hai la ma tran doi xung.\n");
    } else {
        printf("Ma tran thu hai KHONG phai la ma tran doi xung.\n");
    }

    return 0;
}