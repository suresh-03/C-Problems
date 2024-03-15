// Write a program in C to read n number of values in an array and display them in reverse order. 

#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);

	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}

	for(int i = n-1; i >= 0; i--){
		printf("%d",arr[i]);
	}
}
