
public class ex03 {

	public static void method()throws NumberFormatException
	{
		int n  = Integer.parseInt("number");
		System.out.println(n);
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		try{
			method();	
		}catch(NumberFormatException e)
		{
			System.out.println("exploded");
		}	
	}
}
