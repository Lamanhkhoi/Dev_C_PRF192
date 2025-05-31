#include <stdio.h>

int main(){
    int n,i;
    printf("Input n :=");scanf("%d",&n);
    for ( i = 1; i < n; i++){
        if ( n % i == 0  && i % 2 != 0){
            printf("%d\t",i);
        }
    }
    return 0;
}