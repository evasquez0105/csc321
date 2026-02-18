//Elmer Vasquez
//CSC 321
// Lab #6

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int x = 2;
	int y = 7;
	double c = 6;
	double v = 7;
	int total = 0;
	double dtotal = 0;
	total = x+y*x/y-x;
	dtotal = c+v*c/v-c;

	printf("First equation (x+y*x/y-x) \n");
	printf("int total = %d  \n", total);
	printf("double total = %lf \n",dtotal);
	printf("=========================== \n");

	total = -x-y/x*y+x;
	dtotal = -c-v/c*v+c;

	printf("Second equation (-x-y/x*y+x) \n");
        printf("int total = %d  \n", total);
        printf("double total = %lf \n",dtotal);
	printf("=========================== \n");

	total = x+y-x/y;
        dtotal = c+v-c/v;

        printf("Third equation (x+y-x/y) \n");
        printf("int total = %d  \n", total);
        printf("double total = %lf \n",dtotal);
	printf("=========================== \n");

	return EXIT_SUCCESS;
}
