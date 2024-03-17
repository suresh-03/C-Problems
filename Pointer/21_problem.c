// Write a program in C to print all the alphabets using a pointer

#include <stdio.h>

int main(){
	int a = 65;
	int *c = &a;

	for(int i = 0; i < 26; i++){
		printf("%c ",*(c));
		int ch = *(c)+1;
		c++;
		c = &ch;
	}
	printf("\n");
}