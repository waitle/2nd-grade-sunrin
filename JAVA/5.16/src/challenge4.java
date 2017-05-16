import java.util.Scanner;

public class challenge4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		int a, b;
		String c;
		a = input.nextInt();
		c = input.next();
		b = input.nextInt();
		if(c=="+")
		{
			add av = new add();
			av.setval(a, b);
			System.out.println(av.getval());
		}
		else if(c=="/")
		{
			div av = new div();
			av.setval(a, b);
			System.out.println(av.getval());
		}
		else if(c=="*")
		{
			mul av = new mul();
			av.setval(a, b);
			System.out.println(av.getval());
		}
		else
		{
			sub av = new sub();
			av.setval(a, b);
			System.out.println(av.getval());
		}
	}

}
