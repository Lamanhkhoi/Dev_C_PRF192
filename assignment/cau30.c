#include <stdio.h>
#include <stdlib.h>

void listDuplicatesNested(int a[], int size);

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

    listDuplicatesNested(a,size);
    return 0;
}

void listDuplicatesNested(int arr[], int size) {
    if (size < 2) {
        return;
    }
    
    printf("Cac gia tri xuat hien nhieu hon mot lan la: ");

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                int appeared_before = 0;
                for (int k = 0; k < i; k++) {
                    if (arr[k] == arr[i]) {
                        appeared_before = 1;
                        break;
                    }
                }
                
                if (!appeared_before) {
                    printf("%d ", arr[i]);
                }
                break; 
            }
        }
    }
    printf("\n");
}