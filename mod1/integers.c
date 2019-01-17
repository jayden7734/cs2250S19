#include<stdio.h>
// This is a comment. Your compliler will ignore it
// to compile my code run this command: gcc <file.c> -o <file>
// to run the code: ./<file>


int main()
{
	int age = 21;
	int weight = 0;
	// printf() to print output to screen
	printf("How old are you?\n");
	// use placeholder to display variable info
	// for example: %d for integersi
	//		%p for address of variable.
	//		Use the '&' operator to get it
	printf("I am %d years old.\n",age);
	printf("The address of int age is = %p\n", &age);
	age = 23;
	printf("I am %d years old.\n",age);

	printf("You are %d years and %d pounds.\n",age, weight);
	return 0;
}
