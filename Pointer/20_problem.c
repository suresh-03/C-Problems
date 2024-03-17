// Write a program in C to show a pointer to an array whose contents are pointers to structures. 

#include <stdio.h>

typedef struct Employee{
	int id;
	char *name;
} employee;

int main(){

	employee *arr[3];
	employee e1,e2,e3;
	employee *pt1 = &e1;
	employee *pt2 = &e2;
	employee *pt3 = &e3;

	employee **pt = arr;

	pt1->id = 1;
	pt1->name = "suresh";

	pt2->id = 2;
	pt2->name = "virat";

	pt3->id = 3;
	pt3->name = "rohit";


	(pt)[0] = pt1;
	arr[1] = pt2;
	arr[2] = pt3;

	printf("%d %s\n",(*(*(pt+1))).id,(arr[0])->name);

}