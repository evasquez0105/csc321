//Elmer Vasquez
//Lab #9
import java.util.Scanner;
import java.util.Random;

public class evasquez9 
{
	public static void main(String[] args) 
	{
		Scanner input = new Scanner(System.in);
		Random rand = new Random();
		
		int guess = 0;
		int answer = rand.nextInt(20) + 1;
		int attempts = 0;
		
		while (guess != answer) 
		{
			System.out.print("Guess a number between 1 and 20: ");
			guess = input.nextInt();

			if (guess < 1 || guess > 20) 
			{
				System.out.println("You input a number that is out of range (1-20) re-enter a number");
				attempts++;
			}

			if (guess > answer) 
			{
				System.out.println("You lost and your guess is higher than my number which was " + answer + ".");
				attempts++;
			}

			else if (guess < answer) 
			{
				System.out.println("You lost and your guess is lower than my number which was " + answer + ".");
				attempts++;
			}
			
		}

		for (int i = 0; i < answer; i++) 
		{
			System.out.println("You won and guessed the number correctly!");
		}
	}
}
