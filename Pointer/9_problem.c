//  Write a program in C to find the largest element using Dynamic Memory Allocation

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d",&n);

	int *arr = (int *)malloc(n*sizeof(int));

	for(int i = 0; i < n; i++){
		scanf("%d",arr+i);
	}


	for(int i = 0; i < n; i++){
		if(*arr < *(arr+i)){
			*arr = *(arr+i);
		}
	}

	printf("MAX : %d\n",*arr);


}