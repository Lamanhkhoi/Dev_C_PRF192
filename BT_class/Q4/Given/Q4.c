#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max 50
int Isprime (int n);
void Input(int a[],int* pn);
//-----------------------------------------------
//find the last index of the prime in array, if there is no prime, return -1
int FindLastIndexPrime(int a[],int n){	
    //Begin your statements here 
	
    //End your statements
}
//==========DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION========
int main(int argc, char* argvs[]){
  	system("cls");
  	int a[50],n;
  	Input(a,&n);
  	int index = FindLastIndexPrime(a,n);
  	printf("OUTPUT:\n");
  	printf("%d\n",index);
  	system("pause");
  	return 0;
  	//============================================================
}
//DO NOT ADD NEW OR CHANGE STATEMENTS IN THIS FUNCTION
int Isprime (int n)
{
   
}
//DO NOT ADD NEW OR CHANGE STATEMENTS IN THIS FUNCTION
void Input(int a[],int* pn){
	do{
		printf("Number of elements n (0<n<50) = ");
		scanf("%d",pn);	
	} while (*pn<=0 || *pn>=50);
	int i;
	printf("Input the elements:\n"); 
	for(i=0;i<*pn;i++)
		scanf("%d",&a[i]);
}

