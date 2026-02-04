//Elmer Vasquez
//
//java code
//Lab #4


import java.util.Scanner;
public class evasquez4 
{
	public static void main(String[] args) 
	{
		Scanner input = new Scanner(System.in);

		System.out.println("Menu: ");
		System.out.println("Enter 1 for a joke."
				+ "\nEnter 2 for the campus name."
			       + "\nEnter 3 for a burger."	
			       + "\nEnter 4 to confirm an appointment.");
		int choice = input.nextInt();

		switch(choice)
	       	{
			case 1: 
				System.out.println("Me: What's up!?"
						+ "\nYou: The sky!");
				break;
			case 2:
				System.out.println("Campus is California State University Dominguez Hills.");
				break;
			case 3:
				System.out.println("Order number 41, a burger with large fries.");
				break;
			case 4:
				System.out.println("Thank you for confirming your tutoring appointment tomorrow at 11am - 12:30pm.");
			default:
				System.out.println("Invalid choice please try again.");
		}

		
				
	}
}
