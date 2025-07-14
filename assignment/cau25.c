#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int a[100];
    int size;
    int user,i;

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

    printf("Input value x:= ");
    scanf("%d",&user);

    int currentDistance, farthestDistance, position;
    farthestDistance = abs(a[0] - user);

    for ( i = 0; i < size; i++){
        currentDistance = abs(a[i] - user);
        if ( currentDistance > farthestDistance ){
            farthestDistance = currentDistance;
            position = i;
        }
    }

    printf("Value in the array farthest from value %d is %d", user, a[position]);
    return 0;
}