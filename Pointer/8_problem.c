// Write a program in C to print all permutations of a given string using pointers

#include <stdio.h>
#include <string.h>

void swap(char *ch1,char *ch2){
	char temp = *ch1;
	*ch1 = *ch2;
	*ch2 = temp;
}

void permute(char *str,int s, int l){
	if(s == l){
		printf("%s\n",str);
	}
	else{

	for(int i = s; i <= l; i++){
		swap(str+s,str+i);
		permute(str,s+1,l);
		swap(str+s,str+i);
	}
}
}

int main(){
	char str[] = "ABC";

	int n = strlen(str);
	permute(str,0,n-1);
}