class c{
	void print()
	{
		System.out.println("this is car");
	}
}
class bus extends c{
	void print()
	{
		System.out.println("this is bus");
	}
}
class truck extends c{
	void print()
	{
		System.out.println("this is truck");
	}
}
public class car {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		c myc = new c();
		c youc;
		bus mybus = new bus();
		bus youbus;
		myc.print();
		mybus.print();

}