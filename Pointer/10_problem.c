// Write a program in C to calculate the length of a string using a pointer.


#include <stdio.h>


int main(){
	char str[100];
	scanf("%[^\n]s",str);

	char *ptr = str;
	int i = 0;
	while(ptr[i] != '\0'){
		i++;
	}
	printf("%d\n",i);
}