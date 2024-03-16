// Write a program in C to add two numbers using pointers.

#include <stdio.h>

int main(){

	int a = 10;
	int b = 20;

	int* c = &a;
	int* d = &b;

	int sum = (*c)+(*d);
	printf("%d\n",sum);
}