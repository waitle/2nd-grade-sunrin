package car;

public class Mtexam {
	public static int num=0;
	public static final double PI=3.14;
	public static void sum(int a)
	{
		System.out.println("class mathod"+PI+num);
	}
	public static void main(String [] args)
	{
		Mtexam ok = new Mtexam();
		//ok.sum();
		Mtexam.sum(1);
	}
}
