#include <stdio.h>

int main()
{
	char array[10];	
	int i=0;
	
	printf("Program#1\n");
	printf("------------\n");
	printf("Hello World!! From USER A: HYPERTASTIC\n");
	printf("My ID: 55070501056\n");	

	printf("First edit by USER_A\n");		//First edit USER_A

	printf("What is your name?\n");
	for(i=0;i<10;i++)	
		scanf("%c",array[i]);

	printf("Second edit by USER_A\n");		//Second edit USER_A
	printf("Third edit for Error's sake \n");		//Third edit USER_B
	return 0;
}