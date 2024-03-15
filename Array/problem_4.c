// Write a program in C to copy the elements of one array into another array

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d",&n);

	int* arr1 = (int*)malloc(n*sizeof(int));
	int* arr2 = calloc(n,sizeof(int));

	for(int i = 0; i < n; i++){
		scanf("%d",&arr1[i]);
		arr2[i] = arr1[i];
	}

	for(int i = 0; i < n; i++){
		printf("%d\t",arr1[i]);
	}
	printf("\n");
	for(int i = 0; i < n; i++){
		printf("%d\t",arr2[i]);
	}
}