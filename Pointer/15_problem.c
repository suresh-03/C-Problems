// Write a C program to demonstrate how a function returns a pointer

#include <stdio.h>

int *findMax(int*,int*);

int main(){

int a = 10,b=20;
int *ans = findMax(&a,&b);
printf("MAX : %d\n",*ans);

}

int *findMax(int *a, int *b){
	if(*a > *b){
		return a;
	}
	return b;
}