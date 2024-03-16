// Write a program in C to find two elements whose sum is closest to zero.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 10000000;

int main(){
	int arr[] = {38,44,63,-51,-35,19,84,-69,4,-46};
	int n = sizeof(arr)/sizeof(arr[0]);

	int min = MAX;

	int first = 0;
	int second = 0;

	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			int sum = arr[i]+arr[j];
			if(abs(sum) < abs(min)){
				min = abs(sum);
				first = arr[i];
				second = arr[j];
			}
		}
	}

	printf("%d %d\n",first,second);
}