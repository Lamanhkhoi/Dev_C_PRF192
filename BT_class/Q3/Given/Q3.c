#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int CountNumberBetweenAB(float arr[], int n, int a, int b) {
    //begin your code here
    
  //end your code here
}

//DO NOT ADD NEW OR CHANGE STATEMENTS IN THIS FUNCTION
void input(float a[], int *pn) ;

//==========DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION========
int main(int argc, char *argvs[]) {
    system("cls");
    float a[100];
	int n;
    input(a, &n);
    int x,y;
    do{
    	printf("input [a,b]: ");
    	scanf("%d%d",&x,&y);
	}while(x>y);
    int count = CountNumberBetweenAB(a, n,x,y);
    printf("OUTPUT:\n");
    printf("%d\n", count);
    system("pause");
    return 0;
}

void input(float a[], int *pn) {
    do {
        printf("size of array = ");
        scanf("%d", pn); 
    } while (*pn <= 0 || *pn > 100);
    int i;
    for (i = 0; i < *pn; i++) {
        scanf("%f", &a[i]); 
    }
}
