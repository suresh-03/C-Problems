
// Create a structure called "Student" with members name, age, and total marks. Write a C program to input data for two students, display their information, and find the average of total marks

#include <stdio.h>
#include <stdlib.h>

struct Student{
	char* name;
	int age;
	int* marks;
};


int main(){
	struct Student s1;
	int avg = 0;

	s1.name = "suresh";
	s1.age = 21;
	s1.marks = (int*)malloc(5*sizeof(int));

	for(int i = 0; i < 5; i++){
		scanf("%d",&s1.marks[i]);
		avg += s1.marks[i];
	}

	struct Student* ptr = &s1;
	printf("%s\n",ptr->name);
	printf("%d\n",ptr->age);
	printf("%.2f\n",(float)avg/(float)5);
}