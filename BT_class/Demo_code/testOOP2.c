#include <stdio.h>
#include <stdlib.h>
#define max 50

typeof struct date{
	int id;
	char name[20];
	float grade;
	
}student;

void inputStudentInfo(student *s);
void printAStudent(student *s)
void printStudent(student a[], int n);
void printAddress(student *s);
int main(){
	student a[max];
	int n;
	printf("How many student? ";
	scan("%d", &n);
	
}