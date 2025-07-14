#include <stdio.h>
#include <stdlib.h>
#define max 100
#include <time.h>

void printArray(int *a, int size);
int deleteNegative(int *a, int *size);

int main(){
    int size,i;
    int a[max];

    do{
        printf("Size of array (1-100):= ");scanf("%d", &size);
        if ( size < 1 || size > 100 ){
            printf("Invalid size of array!!!");
        }   
    }while(size < 1 || size > 100);

    srand(time(NULL));
    int start,end;
    printf("Input start range number:= "); scanf("%d", &start);
    printf("Input end range number:= "); scanf("%d", &end);
    for ( i = 0; i < size; i++ ){
        a[i] = start + rand() % ( start + 1 - end );
    }

    printf("In array:\n");
    printArray(a,size);

    printf("\nArray after delete all negative numbers:\n");
    deleteNegative(a,&size);
    printArray(a,size);
    return 0;
}

void printArray(int *a, int size){
    int i;
    for ( i = 0; i < size; i++ ){
        printf("%d\t", a[i]);
    }
}

int deleteNegative(int *a, int *size){
    int i,j = 0;
    for ( i = 0; i < *size; i++ ){
        if ( a[i] >= 0 ){
            a[j] = a[i];
            j++;
        }
    }
    *size = j;
    return 1;
}