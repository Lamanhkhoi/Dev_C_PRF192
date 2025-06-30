#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 50

typedef struct {
	int id;
	char name[20];
	float grade;
	
}student;

void printAStudent(student s);
void inputStudent(student a[], int n);
void printStudent(student a[], int n);
int main(){
	student a[max];
	int n;
	printf("How many student? ");
	scanf("%d", &n);
	inputStudent(a,n);
	printf("\nstudent list:\n");
	printStudent(a,n);
	return 1;
}

void printAStudent(student s){
	printf("%d - %s - %.1f\n",s.id,s.name,s.grade);
}

void inputStudent(student a[], int n){
	for (int i = 0; i < n; i++){
		printf("id = ");scanf("%d",&a[i].id);
		fflush(stdin);
		printf("name = ");scanf("[^\n]",&a[i].name);
		printf("grade = ");scanf("%f",&a[i].grade);
	}
}

void printStudent(student a[], int n){
	for (int i = 0; i < n; i++){
		printAStudent(a[i]);
	}
}