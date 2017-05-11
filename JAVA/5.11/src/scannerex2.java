import java.util.Scanner;

public class scannerex2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("input name age  hi");
		String name;
		int age;
		double hi;
		Scanner wot = new Scanner(System.in);
		name = wot.next();
		age=wot.nextInt();
		hi=wot.nextDouble();
		System.out.println("naem"+name);
		System.out.println("age" + age);
		System.out.println("hi" + hi);
		wot.close();
	}

}
