// Write a program in C to find the Floor and Ceiling of the number 0 to 10 from a sroted array.

#include <stdio.h>


int main(){
	int arr[] = {1,3,5,7,8,9};
	int n = sizeof(arr)/sizeof(arr[0]);

	for(int i = 1; i <= 10; i++){
		int floor = -1,ceil = -1;
		if(i > arr[n-1]){
			floor = arr[n-1];
		}
		else if(i < arr[0]){
			ceil = arr[0];
		}
		else{
		for(int j = 0; j < n; j++){
			if(i == arr[j]){
				floor = arr[j];
				ceil = arr[j];
				break;
			}
			else if(i < arr[j]){
				if(j-1 < 0){
					floor = -1;
				}
				else{
				floor = arr[j-1];
				}
				ceil = arr[j];
				break;
			}
		}
	}
		printf("floor of %d is %d and ceil of %d is %d\n",i,floor,i,ceil);
	}
}