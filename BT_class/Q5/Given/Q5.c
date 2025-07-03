#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Write a function to count how many numbers in the array satisfy the condition that each digit 
// of the number increases usign the check_increasesNumber
int check_increasesNumber(int n)
{
	//begin your code here
         
  //end your code here
	
}
int CountIncreasingNumber(int arr[], int n) {
    //begin your code here
   
  //end your code here
}

//DO NOT ADD NEW OR CHANGE STATEMENTS IN THIS FUNCTION
void input(int a[], int *pn) ;

//==========DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION========
int main(int argc, char *argvs[]) {
    system("cls");
    int a[100];
	int n;
    input(a, &n);
    int count = CountIncreasingNumber(a, n);
    printf("OUTPUT:\n");
    printf("%d\n", count);
    system("pause");
    return 0;
}
void input(int a[], int *pn) {
    do {
        printf("size of array = ");
        scanf("%d", pn); 
    } while (*pn <= 0 || *pn > 100);
    int i;
    for (i = 0; i < *pn; i++) {
        scanf("%d", &a[i]); 
    }
}
