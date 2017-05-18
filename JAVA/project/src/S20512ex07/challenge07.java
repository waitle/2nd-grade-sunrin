package S20512ex07;

import java.util.Scanner;

class calculator{
	calculator(int a, int b)
	{
		multiply(a, b);
		divide(a, b);
	}
	int multiply(int a, int b)
	{
		System.out.println("multiply=" + a*b);
		return 0;
	}
	double divide(int a, int b)
	{
		System.out.println("divide=" + a/b);
		return 0;
	}
}
public class challenge07 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		System.out.println("integer a : ");
		int a = input.nextInt();
		System.out.println("integer b : ");
		int b = input.nextInt();
		calculator cal = new calculator(a, b);
	}

}
