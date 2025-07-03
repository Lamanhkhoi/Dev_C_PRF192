#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*q2. Write a function to count how many numbers in the array satisfy the condition that 
the first digit of the number is even number
EX: arr = {34, 43, 65, 90, 81}, Count = 3
They are 43, 65 and 81
*/

int check_FrirstEvenDigit(int n)
{
	//begin your code here
         
  //end your code here
}
int Count__FrirstEvenDigit(int arr[], int n) {
    //begin your code here
   
  //end your code here
}

void input(int a[], int *pn) ;
//==========DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION========
int main() {
    system("cls");
    int a[100];
	int n;
    input(a, &n);
    int count = Count__FrirstEvenDigit(a, n);
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
