#include <stdio.h>
#include <math.h>
void calS_P(float a, float b, float c, float *p, float *s);

int main(){
	float a,b,c,CV = 0,DT = 0;
	
	printf("Input a:=");scanf("%f",&a);
	printf("Input b:=");scanf("%f",&b);
	printf("Input c:=");scanf("%f",&c);
	
	calS_P(a,b,c,&CV,&DT);
	
	printf("%.2f\n", CV);
	printf("%.2f", DT);
	

	return 0;
}

void calS_P(float a, float b, float c, float *p, float *s){
	
	*p = a + b + c;
	float t = *p / 2.0;
	*s = sqrt(t*(t-a)*(t-b)*(t-c));
	
}