#include <stdio.h>
#include <stdlib.h>
#define max 100
#include <time.h>

void printArray(int *a, int size);
int insertElement(int *a, int *n, int value, int p);

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

    int position, newValue;
    printf("Input new value:= ");scanf("%d", &newValue);
    printf("Input new position:= ");scanf("%d",&position);
    if (insertElement(a, &size, newValue, position)) {
        printf("Chen thanh cong! Mang sau khi chen:\n");
        printArray(a, size);
    } else {
        printf("\nChen that bai!\n");
    }
    return 0;
}

void printArray(int *a, int size){
    int i;
    for ( i = 0; i < size; i++ ){
        printf("%d\t", a[i]);
    }
}

int insertElement(int *a, int *n, int value, int p){
    if ( p > max ){
        printf("Error. Don't have any space to insert element!!!");
        return 0;
    }

    int i;
    for ( i = *n - 1; i >= p; i--) {
        a[i + 1] = a[i];
    }
    a[p] = value;
    (*n)++;
    return 1;
}