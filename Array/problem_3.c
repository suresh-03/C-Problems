// Write a program in C to find the sum of all elements of the array. 

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;

	scanf("%d",&n);
	int sum = 0;


	int* arr = calloc(n,sizeof(int));
	for(int i = 0; i < n; i++){
		scanf("%d",&arr[i]);
		sum += (arr[i]);
	}
	free(arr);
	printf("%d\n",sum);

}