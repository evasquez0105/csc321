//Elmer Vasquez
//Lab #10
//CSC 321

import java.util.Scanner;

public class evasquez10 
{
	public static void main(String[] args) 
	{
		Scanner input = new Scanner(System.in);

		double radius;
		double height;

		System.out.println("Enter the value for the radius of a cylinder: ");
		radius = input.nextDouble();

		System.out.println("Enter the value for the height of a cylinder: ");
		height = input.nextDouble();

		double volume = calcVolume(radius, height);

		System.out.println("The volume of a cylinder is " + volume + ".");

	}

	static double calcVolume(double radius, double height) 
	{
		double volume = Math.PI * radius * radius * height;
		return volume;
	}

}
