#include <stdio.h>
#include <stdlib.h>
#define max 100
#include <time.h>

void printArray(int a[][max], int rows, int cols);
void checkPrimeMatrix(int a[][max], int rows, int cols);
int primeNum(int n);

int main(){
    int size,i,j;
    int a[max][max],b[max];

    srand(time(NULL));
    int start, end, rows, columns;
    printf("Input start range number:= "); scanf("%d", &start);
    printf("Input end range number:= "); scanf("%d", &end);
    printf("Input rows := "); scanf("%d", &rows);
    printf("Input columns := "); scanf("%d", &columns);
    
    for ( i = 0; i < rows; i++ ){
        for ( j = 0; j < columns; j++){
            a[i][j] = start + rand() % ( start + 1 - end );
        }
    }

    printf("In matrix:\n");
    printArray(a,rows,columns);

    printf("In matrix after:\n");
    checkPrimeMatrix(a,rows,columns);
    return 0;
}

void printArray(int a[][max], int rows, int cols){
    int i,j;
    for ( i = 0; i < rows; i++ ){
        for ( j = 0; j < cols; j++){
            printf("a[%d][%d]:= %d\n",i,j,a[i][j]);
        }
    }
}

void checkPrimeMatrix(int a[][max], int rows, int cols){
    int i,j;
    for ( i = 0; i < rows; i++ ){
        for ( j = 0; j < cols; j++){
            if ( primeNum (a[i][j]) ){
                for (int k = 0; k < cols; k++) {
                    printf("%d\t", a[i][k]);
                }
                printf("\n");
                break;
            }
        }
    }
}

int primeNum(int n){
    int i;
    if ( n <= 1 ) return 0;
    for ( i = 2; i * i <= n; i++){
        if ( n % i == 0 ) {
            return 0;
        }
    }
    return 1;
}