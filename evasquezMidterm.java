//Elmer Vasquez
//Midterm
import java.util.Scanner;

public class evasquezMidterm
{
        public static void main(String[] args)
        {
                Scanner input = new Scanner(System.in);

                int number = 17;

                System.out.println("Choose a number between 10 or 20: ");
                int guess = input.nextInt();

                if (guess < number)
                {
                        System.out.println("Your guess is less than the number.");
                }
                else if (guess > number)
                {
                        System.out.println("Your guess is more than the number");
                }

                if (guess == number)
                {
                        System.out.println("Congrats you guessed the right number! It was " + number + "!");
                }
                else
                {
                        System.out.println("Incorrect guess. You lose womp womp wompppp.");
                }
		input.close();
        }
}

