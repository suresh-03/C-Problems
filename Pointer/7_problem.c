// Write a program in C to store n elements in an array and print the elements using a pointer

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d",&n);

	int *arr = (int *)malloc(n*sizeof(int));

	for(int i = 0; i < n; i++){
		scanf("%d",arr+i);
	}

	int *ptr = arr;

	for(int i = 0; i < n; i++){
		printf("%d\n",*(ptr+i));
	}


}