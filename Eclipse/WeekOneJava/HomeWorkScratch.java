import java.util.Scanner;
public class HomeWorkScratch {

	private static Scanner scan;

	public static void main(String[] args) {
		scan = new Scanner (System.in);
		System.out.println("Enter an integer:");
		int max = scan.nextInt ();
		for (int i=1; i <=9; i++){
			System.out.println("Enter an integer:");
			int number = scan.nextInt ();
			if  (number > max) max = number;
		}
		System.out.println("The largest integer entered was:" + max);
	}

}
