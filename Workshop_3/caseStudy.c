/*
Tên: Lâm Anh Khôi
MSSV: SE203458
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

void addValue(int *a, int *n, int value);
int searchValue(int *a, int n, int value);
void removeFirst(int *a, int *n, int value);
void removeAll(int *a, int *n, int value);
void printArray(int *a, int n);
void printAscending(int *a, int n);
void printDescending(int *a, int n);

int main(){
    int a[MAX_SIZE];
    int n = 0;
    int choice, value;

    do{
        printf("\nMenu\n");
        printf("1- Add a value\n");
        printf("2- Search a value\n");
        printf("3- Remove the first existence of a value\n");
        printf("4- Remove all existence of a value\n");
        printf("5- Print out the array\n");
        printf("6- Print out the array in ascending order (positions of elements are preserved)\n");
        printf("7- Print out the array in descending order (positions of elements are preserved)\n");
        printf("Other- Quit\n");
        printf("Your choice: ");
        scanf("%d", &choice);
    
        switch (choice)
        {
        case 1:
            printf("Enter value to add: ");scanf("%d", &value);
            addValue(a,&n,value);
            break;
        case 2:
            printf("Enter value to search: ");scanf("%d", &value);
            int pos = searchValue(a,n,value);
            if ( pos != -1){
                printf("Value %d found at position %d.\n",value,pos);
            }else {
                printf("Value %d not found.\n",value);
            }
            break;
        case 3:
            printf("Enter value to remove (first occurrence): ");scanf("%d",&value);
            removeFirst(a,&n,value);
            break;
        case 4:
            printf("Enter value to remove (all occurrence): ");scanf("%d",&value);
            removeAll(a,&n,value);
            break;
        case 5:
            printf("Current array: ");
            printArray(a,n);
            break;
        case 6:
            printf("Array in ascending order: ");
            printAscending(a,n);
            break;
        case 7:
            printf("Array in descending order: ");
            printDescending(a,n);
            break;
        default:
            printf("Goodbye!\n");
            break;
        }
    }while ( choice >= 1 && choice <= 7);
    return 0;
}

void addValue(int *a, int *n, int value){
    if (*n >= MAX_SIZE){
        printf("Array is full. Cannot add more values.\n");
        return;
    }
    a[*n] = value;
    (*n)++;
    printf("Value %d added successfully.\n",value);
}

int searchValue(int *a, int n, int value){
    for (int i = 0; i < n; i++){
        if ( a[i] == value ) return i;
    }
    return -1;
}

void removeFirst(int *a, int *n, int value){
    int pos = searchValue(a, *n, value);
    if (pos == -1){
        printf("Value %d not found. No removal performed.\n",value);
        return;
    }
    for ( int i = pos; i < *n -1; i++){
        a[i] = a[i+1];
    }
    (*n)--;
    printf("Value %d removed successfully (first occurrence).\n",value);
}

void removeAll(int *a, int *n, int value){
    int count = 0;
    for (int i = 0; i < *n;){
        if ( a[i] == value ){
            for ( int j = i; j < *n - 1; j++){
                a[j] = a[j +1];
            }
            (*n)--;
            count++;
        }else {
            i++;
        }
    }
    if ( count > 0){
        printf("Value %d removed %d time(s).\n",value,count);
    }else{
        printf("Value %d not found. No removal performed.\n",value);
    }
}

void printArray(int *a, int n){
    for (int i = 0; i < n; i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
}

void printAscending(int *a, int n){
    int temp[MAX_SIZE];
    for (int i = 0; i < n; i++) temp[i] = a[i];

    for (int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if ( temp[i] > temp[j]){
                int t = temp[i];
                temp[i] = temp[j];
                temp[j] = t;
            }
        }
    }
    printArray(temp, n);
}

void printDescending(int *a, int n){
    int temp[MAX_SIZE];
    for (int i = 0; i < n; i++) temp[i] = a[i];

    for (int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if ( temp[i] < temp[j]){
                int t = temp[i];
                temp[i] = temp[j];
                temp[j] = t;
            }
        }
    }
    printArray(temp, n);
}