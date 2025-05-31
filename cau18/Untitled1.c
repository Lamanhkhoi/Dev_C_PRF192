#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c;
	float CV, S, q;
	
	do
	{
		do
		{
			printf("Input side a :=");scanf("%f",&a);
			if ( a < 0 ){
				printf("Invalid value !!! Please try again !!!\n");
			}
		}while( a < 0 );
		
		do
		{
			printf("Input side b :=");scanf("%f",&b);
			if ( b < 0 ){
				printf("Invalid value !!! Please try again !!!\n");
			}
		} while( b < 0 );
		
		do
		{
			printf("Input side c :=");scanf("%f",&c);
			if ( c < 0 ){
				printf("Invalid value !!! Please try again !!!\n");
			}
		} while ( c < 0 );
		
		if ( a + b <= c || a + c <= b || b + c <= a ){
			printf("It is not a triangle !!!\nPlease try again !!!\n");
		} else {
			printf("a = %f, b = %f, c = %f, are the 3 sides of the triangle\n", a,b,c);
		}
	}while( a + b <= c || a + c <= b || b + c <= a );

	CV = a + b + c;
	printf("Circumference CV = a + b + c = %.2f + %.2f + %.2f = %.2f\n", a,b,c,CV);

	q = ( a + b + c )/2;
	S = sqrt(q*( q - a )*( q - b )*( q - c));
	printf("Area S = %.2f", S);
	return 0;
}	