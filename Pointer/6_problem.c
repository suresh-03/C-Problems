//  Write a program in C to find the maximum number between two numbers using a pointer.

#include <stdio.h>


int main(){
	int a = 10,b = 20;

	int *c = &a;
	int *d = &b;

	if(*c > *d){
		printf("%d\n",*c);
	}
	else{
		printf("%d\n",*d);
	}
}