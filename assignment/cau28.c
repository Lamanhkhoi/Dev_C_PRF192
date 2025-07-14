#include <stdio.h>
#include <stdlib.h>

int digitLeast(int a[], int size);

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

    int result = digitLeast(a,size);

    if ( result != -1){
        printf("the digit that appears the least in the array is %d", result);
    } else {
        printf("do not have any number");
    }
    return 0;
}

int digitLeast(int a[], int size){
    int time[10] = {0},i;

    for ( i = 0; i < size; i++ ){
        int currentNum = abs(a[i]);
        if ( currentNum == 0 ){
            time[0]++;
        }

        while ( currentNum > 0 ){
            int digit = currentNum % 10;
            time[digit]++;
            currentNum = currentNum / 10;
        }
    }

    int leastTime = 1000;
    int leastDigit = 1;
    for ( i = 0; i < 10; i++ ){
        if ( time[i] > 0){
            if ( time[i] < leastTime ){
                leastTime = time[i];
                leastDigit = i;
            }
        }
    }
    return leastDigit;
}