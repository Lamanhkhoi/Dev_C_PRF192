#include <stdio.h>
#include <stdlib.h>
#define max 100
#include <time.h>

void printArray(int *a, int size);
int checkRealNum(int *a, int size, int *b);
float calculateAve(int *b, int size);

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

    printf("In array before:\n");
    printArray(a,size);

    printf("\nIn array after:\n");
    int sizeB = checkRealNum(a,size,b);
    printArray(b,sizeB);
    printf("the average of positive numbers in a matrix of real numbers is %.2f", calculateAve(b,sizeB));
    return 0;
}

void printArray(int *a, int size){
    int i;
    for ( i = 0; i < size; i++ ){
        printf("%d\t", a[i]);
    }
}

int checkRealNum(int *a, int size, int *b){
    int i,j = 0;
    for ( i = 0; i < size; i++ ){
        if( a[i] > 0 ){
            b[j] = a[i];
            j++;
        }
    }
    return j;
}

float calculateAve(int *b, int size){
    int i, ave = 0;
    float result;
    for ( i = 0; i < size; i++){
        ave += b[i];
    }
    return result = ave*1.0 / size*1.0;
}