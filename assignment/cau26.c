#include <stdio.h>

int main(){
    int i, size;
    float max, min, temp;
    float a[100];

    do{
        printf("Size of array (1-100):= ");scanf("%d", &size);
        if ( size < 1 || size > 100 ){
            printf("Invalid size of array!!!");
        }   
    }while(size < 1 || size > 100);

    for ( i = 0; i < size; i++ ){
        printf("Input value to array[%d]:= ", i+1);
        scanf("%f", &a[i]);
    }
    
    max = a[0];
    min = a[size];
    for ( i = 0; i < size; i++ ){
        temp = a[i];
        if ( max < temp ){
            max = temp;
        }
        if ( min > temp ){
            min = temp;
        }
    }

    printf("the segment [a,b] such that this segment contains all the values in the array are %.2f and %.2f", min, max);
}