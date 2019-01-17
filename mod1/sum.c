#include<stdio.h>

int main()
{
	int x = 3;
	int y = 7;
	
	// to capture user input use the scanf() function
	// Use same place holder as printf: %d for integers
	// BUT remember to use the Address operator "&" before the variable name, &x
	printf("Please enter and integer value\n");

	scanf("%d", &x);

	printf("The value of x is = %d\n",x);
	printf("The value of y is = %d\n",y);
	printf("The Sum of %d + %d is = %d\n",x,y,x+y);
		
	return 0;
}
