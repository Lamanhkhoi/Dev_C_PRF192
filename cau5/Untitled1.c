#include <stdio.h>

int main() {
    int min, max;
    int array[4]; 
    int num_elements = 4; 

    // Input numbers
    for (int i = 0; i < num_elements; i++) {
        printf("Input number %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Initialize min and max with the first element
    if (num_elements > 0) { 
        min = array[0];
        max = array[0];
    } else {
        printf("The array is empty.\n");
        return 1; 
    }

    for (int i = 1; i < num_elements; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }

    printf("The largest number := %d\n", max);
    printf("The smallest number := %d\n", min);

    return 0;
}