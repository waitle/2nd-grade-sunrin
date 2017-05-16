import java.util.Scanner;

public class stack {
	private int stack[];
	private int sp =0;
	public stack (int size){stack = new int[size];}
	Scanner in = new Scanner(System.in);
	public void push(int data)
	{
		int a = in.nextInt();
		stack[sp] = a;
		sp++;
	}
	public int pop()
	{
		if(sp==-1)
			return 0;
		return stack[sp--];
	}
}
