// Write a program in C to swap elements using call by reference.

#include <stdio.h>

void swap(int*,int*);

int main(){
	int a = 10,b = 20;

	printf("BEFORE SWAP : %d %d\n",a,b);
	swap(&a,&b);
	printf("AFTER SWAP : %d %d\n",a,b);

}

void swap(int *n1, int *n2){
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}