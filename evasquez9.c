//Elmer Vasquez
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int i = 0;
	int guess = 0;
	int answer = 1 + rand() %20;
	int attempts = 0;

	while(guess != answer) 
	{
		printf("Guess a number between 1 and 20: ");
		scanf("%d", &guess);

		if (guess < 1 || guess > 20) 
		{
			printf("You input a number that is out of range (1-20) re-enter a valid number. \n");
			attempts++;
		}

		if(guess > answer) 
		{
			printf("You lost and your guess is higher than my number which was %d \n", answer);
			attempts++;
		}

		else if (guess < answer) 
		{
			printf("You lost and your guess is lower than my number which was %d \n", answer);
			attempts++;
		}
	}

	for (i = 0; i < answer; i++) 
	{
		printf("You won and guessed the number correctly!\n");
	}

	return EXIT_SUCCESS;
}
