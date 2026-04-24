//Elmer Vasquez
//CSC 321
//Midterm 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int printnamewithnums(int number);

int main(void) 
{
	int x = 0;
	printf("Enter a number: ");
	scanf("%d", &x);
	
	printnamewithnums(x);

	return EXIT_SUCCESS;
}

int printnamewithnums(int number)
{ 
	char name[] = "Elmer";
	int length = 0;
	length = strlen("name");
	for (int i = 0; i <= length; i++) 
	{
		printf("%s%d \n", name, number);
	}
}


