
import java.util.Scanner;
public class MathEquations {
public static void main(String[] args) {
System.out.println("Enter an integer between 1 and 10 to be used as the first value: ");
Scanner scanint = new Scanner(System.in);
int x = scanint.nextInt();
System.out.println("Enter an integer between 1 and 10 to be used as the second value: ");
int y = scanint.nextInt();
System.out.println("Enter an integer between 1 and 10 to be used as the third value: ");
int z = scanint.nextInt();
scanint.close();
int firstAnswer = operationOne(x);
System.out.println("The answer to part one of the problems is: " +
firstAnswer);
int secondAnswer = operationTwo(x,y);
System.out.println("The answer to part two of the problems is: " +
secondAnswer);
int thirdAnswer = operationThree(x,y,z);
System.out.println("The answer to part three of the problems is: " +
thirdAnswer);
int finalAnswer;
finalAnswer = (firstAnswer+secondAnswer*thirdAnswer);
System.out.println("The final answer is: " + finalAnswer);
}
public static int operationOne(int x) {
int answerOne;
answerOne = (((x*x*x)/x)+x);
return answerOne;
}
public static int operationTwo(int x, int y) {
int answerTwo;
answerTwo = (((x*y)/x)*y);
return answerTwo;
}
public static int operationThree(int x, int y, int z) {
int answerThree;
answerThree = ((((x*y)/(x*z)+x)*y)/z);
return answerThree;
}
}