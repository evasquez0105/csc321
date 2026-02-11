//Elmer Vasquez
//CSC 321
//Lab #5


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int a = 227;
	double b = 321.5;
	float c = 4.48;
	char d = 'A';

	printf("Address of integer a: %p \n", &a);
	printf("Value of integer a: %d \n", a);

	printf("Address of double b: %p \n", &b);
	printf("Value of double b: %f \n", b);

	printf("Address of float c: %p \n", &c);
	printf("Value of float c: %f \n", c);

	printf("Address of char d: %p \n", &d);
	printf("Value of char d: %c \n", d);

	int x = 5;

	if (x > 2)
	{
		printf("x is greater than 2 \n");
	}

	else 
	{
		printf("x is less than 2 \n");
	}

	if (x !=5) 
	{
		int y = 0;
	}

	// printf("Value of y: %d \n", y);
	

	int e[10] = {6, 7, 21, 41, 789, 17, 77, 27, 23, 55};
	int i = 0;

	for (i = 0; i < 10; i++) 
	{
		printf("e[%d] = %d \n", i, e[i]);
		printf("e[%d] Address = %p \n", i, &e[i]);
	}
}
