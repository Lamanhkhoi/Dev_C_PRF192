#include <stdio.h>

void analysisPrimeNumber( int n);

int main(){
    int n;
    printf("Input n :=");scanf("%d",&n);
    analysisPrimeNumber(n);
    return 0;
}

void analysisPrimeNumber( int n){
    int trigger = 0,i;

    while( n % 2 == 0){
        if ( trigger == 1){
            printf(" * ");
        }
        printf("2");
        trigger = 1;
        n /= 2;
    }

    for( i = 3; i * i <= n; i += 2 ){
        while( n % i == 0){
            if ( trigger == 1){
                printf(" * ");
            }
            printf("%d",i);
            trigger = 1;
            n /= i;
        }
    }

    if (n > 1) {
        if ( trigger == 1){
            printf(" * ");
        }
        printf("%d", n);
    }
    
    return;
}