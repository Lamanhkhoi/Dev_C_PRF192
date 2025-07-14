#include <stdio.h>
#include <stdlib.h>

int count(int a[], int size);

int main(){
    int size,i;
    int a[100];

    do{
        printf("Size of array (1-100):= ");scanf("%d", &size);
        if ( size < 1 || size > 100 ){
            printf("Invalid size of array!!!");
        }   
    }while(size < 1 || size > 100);

    for ( i = 0; i < size; i++ ){
        printf("Input value to array[%d]:= ", i+1);
        scanf("%d", &a[i]);
    }

    int result = count(a,size);

    if ( result != -1){
        printf("the number of values ending in 5 in the array of integers is %d", result);
    } else {
        printf("do not have any number");
    }
    return 0;
}

int count(int a[], int size){
    int count = 0,i;

    for ( i = 0; i < size; i++ ){
        int currentNum = abs(a[i]);
        if ( currentNum > 0 ){
            int digit = currentNum % 10;
            if ( digit == 5 ){
                count++;
            }
        }
    }
    return count;
}