#include <stdio.h>
#define ROWS 3
#define COLS 4

int isRowIncreasing(int matrix[][COLS], int cols, int rowIndex) {
    for (int j = 0; j < cols - 1; j++) {
        if (matrix[rowIndex][j] >= matrix[rowIndex][j + 1]) {
            return 0; 
        }
    }
    
    return 1; 
}

int main() {
    int my_matrix[ROWS][COLS] = {
        {10, 20, 35, 50}, 
        {15, 30, 25, 60}, 
        {1,  2,  3,  4}   
    };

    // --- Check Row 0 ---
    int row_to_check = 0;
    if (isRowIncreasing(my_matrix, COLS, row_to_check)) {
        printf("Row %d is increasing. ✅\n", row_to_check);
    } else {
        printf("Row %d is NOT increasing. ❌\n", row_to_check);
    }

    // --- Check Row 1 ---
    row_to_check = 1;
    if (isRowIncreasing(my_matrix, COLS, row_to_check)) {
        printf("Row %d is increasing. ✅\n", row_to_check);
    } else {
        printf("Row %d is NOT increasing. ❌\n", row_to_check);
    }
    
    // --- Check Row 2 ---
    row_to_check = 2;
    if (isRowIncreasing(my_matrix, COLS, row_to_check)) {
        printf("Row %d is increasing. ✅\n", row_to_check);
    } else {
        printf("Row %d is NOT increasing. ❌\n", row_to_check);
    }

    return 0;
}