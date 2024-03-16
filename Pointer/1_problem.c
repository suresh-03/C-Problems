// Write a program in C to show the basic declaration of a pointer

#include <stdio.h>

int main(){
	int m = 10;

	int* z = &m;


	printf("%p\n",z);
	printf("%d\n",*z);
}