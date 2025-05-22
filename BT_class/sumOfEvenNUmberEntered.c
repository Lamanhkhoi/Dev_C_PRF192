#include <stdio.h>

int main(){
    int num, result1 = 0, result2 = 0;

    printf("Input range number :=");
    scanf("%d", &num);

    for ( int i = 1; i <= num; i++){
        if ( i % 2 == 0 ){
            result1 += i;
        }
    }

    for ( int i = 1; i <= num; i++){
        if ( i % 3 == 0 || i % 5 == 0){
            result2 += i;
        }
    }

    printf("Sum of even number from range 1 to %d := %d\n", num, result1);
    printf("Sum of number divided 3 or 5 from range 1 to %d := %d", num, result2);
    return 0;
}