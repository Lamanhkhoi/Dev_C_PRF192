#include <stdio.h>

int main(){
    int n,i,total = 0;
    printf("Input n :=");scanf("%d",&n);
    for ( i = 1; i < n; i++){
        if ( n % i == 0 ){
            total += i;
        }
    }
    printf("%d", total);
    return 0;
}