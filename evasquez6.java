//Elmer Vasquez
/*
 * csc 321
 * lab #6
 */

import java.util.Scanner;

public class evasquez6 
{
	public static void main(String[] args)
	{
		int x = 2;
		int y = 7;
		double c = 6;
		double v = 7;
		int total = 0;
		double dtotal = 0;

		total = x+y*x/y-x;
		dtotal = c+v*c/v-c;
		
		System.out.println("First equation (x+y*x/y-x) ");
		System.out.println("int total = " + total);
		System.out.println("double total = " + dtotal);
		System.out.println("===========================");
		
		total = -x-y/x*y+x;
		dtotal = -c-v/c*v+c;
		System.out.println("Second equation (-x-y/x*y+x) ");
		System.out.println("int total = " + total);
		System.out.println("double total = " + dtotal);
		System.out.println("===========================");

		total = x+y-x/y;
		dtotal = c+v-c/v;
		System.out.println("Third equation (x+y-x/y) ");
		System.out.println("int total = " + total);
		System.out.println("double total = " + dtotal);
		System.out.println("===========================");

	}
}
