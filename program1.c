#include <stdio.h>

int main()
{
	char array[10];	
	int i=0;
	
	printf("Program#1\n");
	printf("------------\n");
	printf("Hello World!! From USER A: ak3ake\n");
	printf("My ID: 55070501024\n");	

	printf("First edit by USER_A\n");		//First edit USER_A

	printf("What is your name?\n");
	for(i=0;i<10;i++)	
		scanf("%c",array[i]);

	printf("Second edit by USER_A\n");		//Second edit USER_A

	return 0;
}