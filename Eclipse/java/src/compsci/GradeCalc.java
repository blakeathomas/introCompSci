package compsci;

import java.text.DecimalFormat;
import java.util.Scanner;

public class GradeCalc {

	// -----------------------------------------------------------------
	// Computes the average of a set of values entered by the user.
	// The running sum is printed as the numbers are entered.
	// -----------------------------------------------------------------
	public static void main(String[] args) {
		int count = 0;
		int num = 1;
		int gradeCount = 1;

		Scanner scanNum = new Scanner(System.in);
		System.out.print("How many grades would you like to calculate?: ");
		num = scanNum.nextInt();

		int sum = 0, value;
		double average;

		Scanner scan = new Scanner(System.in);
		System.out.print("Enter Subject " + (gradeCount) + " grade (0-100): ");
		value = scan.nextInt();
		gradeCount++;

		for (count = 2; count <= num; count++) {
			sum += value;
			System.out.print("Enter Subject " + (gradeCount) + " grade (0-100): ");
			value = scan.nextInt();
			gradeCount++;
		}

		System.out.println();
		average = (double) sum / (num - 1);
		DecimalFormat fmt = new DecimalFormat("0.###");
		System.out.println("Your average grade is: " + fmt.format(average));
		if (average >= 75)
			System.out.println("Great Job!");
		else if (average >= 50 && average < 75)
			System.out.println("Keep Practicing!");
		else
			System.out.println("Better luck next time");

	}
}
