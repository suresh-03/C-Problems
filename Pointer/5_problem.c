// Write a program in C to add numbers using call by reference

#include <stdio.h>

int add(int* a, int* b){
	return *a + *b;
}

int main(){
	int a = 10;
	int b = 20;

	printf("%d\n",add(&a,&b));
}