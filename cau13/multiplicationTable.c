#include <stdio.h>

int main(){
    int n = 9, limit = 10;

    for ( int i = 1; i <= limit; i++ ){
        for ( int j = 2; j <= n; j++ ){
            printf(" %d x %d = %d \t", j, i, ( j * i));
        }
        printf("\n");
    }
    return 0;
}