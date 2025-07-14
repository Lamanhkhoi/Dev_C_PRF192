#include <stdio.h>
#include <stdlib.h>

int main(){
    int size,i;
    int a[100];

    do{
        printf("Size of array (1-100):= ");scanf("%d", &size);
        if ( size < 1 || size > 100 ){
            printf("Invalid size of array!!!");
        }   
    }while(size < 1 || size > 100);

    for ( i = 0; i < size; i++ ){
        printf("Input value to array[%d]:= ", i+1);
        scanf("%d", &a[i]);
    }

    for ( i = 0; i < size; i++ ){
        int firstDigit = abs(a[i]);
        while ( firstDigit >= 10 )
        {
            firstDigit = firstDigit / 10;
        }
        if ( firstDigit % 2 != 0 ){
            printf("First digit is an odd digit is %d", a[i]);
            return 0;
        }
    }
    printf("value = 0");
    return 0;
}