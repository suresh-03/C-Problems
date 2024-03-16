//  Write a program in C to find the factorial of a given number using pointers

#include <stdio.h>

void factorial(int, int*);

int main(){
	int a = 5;
	int f = 1;
	factorial(a,&f);
	printf("%d\n",f);
}

void factorial(int a,int *n){
	for(int i = 1; i <= a; i++){
		*n *= i;
	}
	}