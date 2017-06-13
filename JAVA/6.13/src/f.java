class fruit{
	public void print()
	{
		System.out.println("this is only fruit");
	}
}
class banana extends fruit{
	public void print()
	{
		System.out.println("this is banana");
	}
}
class apple extends fruit{
	public void print()
	{
		System.out.println("this is apple");
	}
}
public class f {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		fruit [] idk = new fruit[3];
		idk [0] = new fruit();
		idk [1] = new banana();
		idk [2] = new apple();
		for(int i=0;i<idk.length;i++)
			idk[i].print();
	}

}
