//Elmer Vasquez
//CSC 321
//Lab # 11

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double findinghypotenuse(int base, int height);

int main(void)
{
	int x = 0;
	int y = 0;
	double hypotenuse = 0;
	printf("Enter the base of a right triangle: ");
	scanf("%d", &x);

	printf("Enter the height of a right triangle: ");
	scanf("%d", &y);
	
	hypotenuse = findinghypotenuse(x, y);

	printf("The hypotenuse of the right triangle is %f \n", hypotenuse);

	return EXIT_SUCCESS;
}

double findinghypotenuse(int base, int height) 
{
	double result = (base * base) + (height * height);
	
	double hypotenuse = sqrt(result);
	return hypotenuse;
}

