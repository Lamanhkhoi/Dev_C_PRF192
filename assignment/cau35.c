#include <stdio.h>
#include <stdlib.h>
#define max 100
#include <time.h>

void printArray(int *a, int size);
int checkOddValue(int *a, int size, int *b);

int main(){
    int size,i;
    int a[max],b[max];

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

    printf("\nIn array a:\n");
    printArray(a,size);

    printf("In array b:\n");
    int sizeB = checkOddValue(a,size,b);
    printArray(b,sizeB);
    return 0;
}

void printArray(int *a, int size){
    int i;
    for ( i = 0; i < size; i++ ){
        printf("%d\t", a[i]);
    }
}

int checkOddValue(int *a, int size, int *b){
    int i,j = 0;
    for ( i = 0; i < size; i++ ){
        if ( a[i] % 2 != 0 ){
            b[j] = a[i];
            j++;
        }
    }
    return j;
}