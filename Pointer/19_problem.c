//  Write a program in C to show a pointer to a union.


#include <stdio.h>

typedef union Student stud;

union Student{
	char *name;
	char *address;
};

int main(){
	stud s1;

	printf("%ld %ld\n",sizeof(s1.name),sizeof(s1.address));

	

	stud *ptr = &s1;
	
	ptr->name = "suresh";

	printf("%s\n%s\n",ptr->address,ptr->name);
}