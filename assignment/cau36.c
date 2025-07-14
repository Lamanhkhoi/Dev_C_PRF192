#include <stdio.h>
#include <stdlib.h>
#define max 100
#include <time.h>

void printArray(int *a, int size);
int checkPrimeNum(int *a, int size, int *b);
int isPrime(int n);

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
    int sizeB = checkPrimeNum(a,size,b);
    printArray(b,sizeB);
    return 0;
}

void printArray(int *a, int size){
    int i;
    for ( i = 0; i < size; i++ ){
        printf("%d\t", a[i]);
    }
}

int checkPrimeNum(int *a, int size, int *b){
    int i,x,count = 0;
    for ( i = 0; i < size; i++ ){
        if (isPrime(a[i])) {
            b[count] = a[i]; 
            count++;         
        }
    } 
    return count;
}

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}