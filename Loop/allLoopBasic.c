/*
Write a C program to print numbers from 1 to 100 using any loop (for, while, or do-while).
*/

#include<stdio.h>
	int main()
	{
		int i;
		// Using For Loop
		printf("Using For Loop\n");
		for( i=1; i<=100; i++){ //For Loop
			printf("%d\n",i);
			}
			i=1; // before this i=100 after this i=1 will be assigned
			
			// Using While Loop
			printf("Using While Loop\n");
		while(i<=100){  //While Loop
			printf("%d\n",i);
			i++;
			}
			i=1; //before this i=100 after this i=1 will be assigned
			
			
			//Using Do-While Loop
			printf("Using Do-While Loop\n");
		do{     //Do-While Loop
			printf("%d\n",i);
			i++;
			}
			while(i<=100);
	return 0;
	}