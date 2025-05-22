#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int findUCLN( int a, int b){
	a = abs(a);
    b = abs(b);

    while ( b != 0 ){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long BCNN( int a, int b){
    if ( a == 0 || b == 0){
        return 0;
    }

    int ucln = findUCLN(a,b);
    return (long long)abs(a)*abs(b) / ucln;
}

int main(){
    int num1, num2;

    do {
        printf("Nhap so nguyen thu 1 :=");
        scanf("%d", &num1);
        if ( num1 == 1){
            printf("Dau vao ko hop le !!!\n");
    }
    } while ( num1 == 1);

    do {
        printf("Nhap so nguyen thu 2 :=");
        scanf("%d", &num2);
        if ( num2 == 1){
            printf("Dau vao ko hop le !!!\n");
    }
    } while ( num2 == 1);

    int result_ucln = findUCLN(num1,num2);
    long long result_bcnn = BCNN(num1,num2);

    printf("Uoc chung lon nhat (UCLN) cua %d va %d la: %d\n", num1, num2, result_ucln);
    printf("Boi chung nho nhat (BCNN) cua %d va %d la: %lld\n", num1, num2, result_bcnn);

    return 0;
}