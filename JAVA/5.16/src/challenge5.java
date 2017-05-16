import java.util.Scanner;

public class challenge5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		stack a = new stack(100);
		Scanner input = new Scanner(System.in);
		for(int i =0;i<100;i++)
		{
			System.out.println("input number");
			int data = input.nextInt();
			if(data == 0)
				break;
			a.push(data);
		}
		for(int j=0;j<100;j++)
		{
			if(a.pop != 0)
			System.out.println(a.pop());
		}
	}

}
