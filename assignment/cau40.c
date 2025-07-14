#include <stdio.h>
#include <stdlib.h>
#define max 100
#include <time.h>

void printArray(int a[][max], int rows, int cols);
int sum(int a[][max], int rows, int cols);

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

    printf("The sum of the elements on the sub-diagonal of a square matrix is %d", sum(a,rows,columns));
    return 0;
}

void printArray(int a[][max], int rows, int cols){
    int i,j;
    for ( i = 0; i < rows; i++ ){
        for ( j = 0; j < cols; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

int sum(int a[][max], int rows, int cols){
    int i,j;
    int sum = 0;
    for ( j = 0; j < cols; j++){
        sum += a[j][j - 1];
    }
    return sum;
}

