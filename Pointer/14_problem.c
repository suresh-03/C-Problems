// Write a program in C to sort an array using a pointer.

#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);

	int arr[n];

	for(int i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}

	int *ptr = arr;

	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(*(ptr+i) > *(ptr+j)){
				int temp = *(ptr+i);
				*(ptr+i) = *(ptr+j);
				*(ptr+j) = temp;
			}
		}
	}

	for(int i = 0; i < n; i++){
		printf("%d\n",arr[i]);
	}
}