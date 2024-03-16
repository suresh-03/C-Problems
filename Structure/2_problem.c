// Define a structure named Time with members hours, minutes, and seconds. Write a C program to input two times, add them, and display the result in proper time format

#include <stdio.h>
#include <stdlib.h>

struct Time{
	int hour;
	int minute;
	int second;
};

int main(){
	struct Time t1,t2;

	printf("Enter first time:\n");
	printf("Hour: ");
	scanf("%d",&t1.hour);
	printf("\nMinutes: ");
	scanf("%d",&t1.minute);
	printf("\nSeconds: ");
	scanf("%d",&t1.second);

	printf("Enter second time:\n");
	printf("Hour: ");
	scanf("%d",&t2.hour);
	printf("\nMinutes: ");
	scanf("%d",&t2.minute);
	printf("\nSeconds: ");
	scanf("%d",&t2.second);

	int seconds = (t1.second + t2.second);
	int minutes = (t1.minute + t2.minute + seconds / 60);
	int hours = (t1.hour + t2.hour + minutes / 60 );

	seconds %= 60;
	minutes %= 60;
	hours %= 24;

	printf("%d:%d:%d\n",hours,minutes,seconds);


}