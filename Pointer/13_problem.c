// Write a program in C to count the number of vowels and consonants in a string using a pointer

#include <stdio.h>

void func(char *str){
	// int i = 0;
	int v = 0;
	int c = 0;

	// while(*(str+i) != '\0'){
	// 	if(*(str+i) == 'a' || *(str+i) == 'e' || *(str+i) == 'i' || *(str+i) == 'o' || *(str+i) == 'u'){
	// 		v++;
	// 	}
	// 	else{
	// 		c++;
	// 	}
	// 	i++;
	// }
		char *ch = str;

	while(*(ch) != '\0'){
		if(*(ch) == 'a' || *(ch) == 'e' || *(ch) == 'i' || *(ch) == 'o' || *(ch) == 'u'){
			v++;
		}
		else{
			c++;
		}
		ch++;
	}


	printf("VOWELS : %d\nCONSONANTS : %d\n",v,c);
}

int main(){
	char str[100];

	scanf("%[^\n]s",str);
	func(str);


}