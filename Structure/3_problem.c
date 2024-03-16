//  Create a structure named Book to store book details like title, author, and price. Write a C program to input details for three books, find the most expensive and the lowest priced books, and display their information

#include <stdio.h>
struct Book{
	char* title;
	char* author;
	int price;
};

int main(){
	struct Book b1,b2,b3;
	printf("Enter the book1 details (title,author,price): \n");
	scanf("%s",b1.title);
	scanf("%s",b1.author);
	scanf("%d",&b1.price);

	printf("Enter the book2 details (title,author,price): \n");
	scanf("%s",b2.title);
	scanf("%s",b2.author);
	scanf("%d",&b2.price);

	printf("Enter the book3 details (title,author,price): \n");
	scanf("%s",b3.title);
	scanf("%s",b3.author);
	scanf("%d",&b3.price);

	if(b1.price > b2.price && b1.price > b3.price){
		printf("Expensive Book:\n");
		printf("%s\n%s\n%d",b1.title,b1.author,b1.price);
	}
	else if(b2.price > b1.price && b2.price > b3.price){
		printf("Expensive Book:\n");
		printf("%s\n%s\n%d",b2.title,b2.author,b2.price);
	}
	else{
		printf("Expensive Book:\n");
		printf("%s\n%s\n%d",b3.title,b3.author,b3.price);
	}

	if(b1.price < b2.price && b1.price < b3.price){
		printf("Cheap Book:\n");
		printf("%s\n%s\n%d",b1.title,b1.author,b1.price);
	}
	else if(b2.price < b1.price && b2.price < b3.price){
		printf("Cheap Book:\n");
		printf("%s\n%s\n%d",b2.title,b2.author,b2.price);
	}
	else{
		printf("Cheap Book:\n");
		printf("%s\n%s\n%d",b3.title,b3.author,b3.price);
	}

}
