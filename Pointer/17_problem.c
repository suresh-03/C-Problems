// Write a program in C to print the elements of an array in reverse order

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d",&n);

	int *arr = (int*)malloc(n*sizeof(int));

	for(int i = 0; i < n; i++){
		scanf("%d",arr+i);
	}

	int *front = arr;
	int *back = front+(n-1);

	while(front != back){
		int temp = *front;
		*front = *back;
		*back = temp;
		front++;
		back--;
	}

	for(int i = 0; i < n; i++){
		printf("%d\n",*(arr+i));
	}
}