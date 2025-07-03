#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Check perfect number
A perfect number is a positive integer that equals the sum of its proper divisors 
(divisors excluding the number itself). 
For example, 6 is a perfect number because its proper divisors (1, 2, and 3) sum to 6 (1+2+3=6). 
*/
int IsPerfect(int n)
{
	//begin your code here
         
  //end your code here
}
//find the average of the perfect number in the array 
float AveragePerfectNumber(int arr[], int n) {
    //begin your code here
         
  //end your code here
}

void input(int a[], int *pn) ;

//==========DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION========
int main(int argc, char *argvs[]) {
    system("cls");
    int a[100], n;
    input(a, &n);
    float avg = AveragePerfectNumber(a, n);
    printf("OUTPUT:\n");
    printf("%.2f\n", avg);
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
