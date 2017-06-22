import java.util.Scanner;
abstract class shape {
	public abstract double getarea();

	public abstract double getcir();
}

class circle extends shape {
	double pi = Math.PI;
	int radis;
	circle(){
		System.out.println("input your radis");
		Scanner sc = new Scanner(System.in);
		radis = sc.nextInt();
	}
	@Override
	public double getarea() {
		// TODO Auto-generated method stub
		return radis*pi*radis;
	}

	@Override
	public double getcir() {
		// TODO Auto-generated method stub
		return 2*pi*radis;
	}

}
class sqare extends shape{
 int x, y;
 sqare()
 {
	 System.out.println("input you width");
	 Scanner sc = new Scanner(System.in);
	 x = sc.nextInt();
	 System.out.println("iput your heigh");
	 y = sc.nextInt();
 }
	@Override
	public double getarea() {
		// TODO Auto-generated method stub
		return x*y;
	}

	@Override
	public double getcir() {
		// TODO Auto-generated method stub
		return (2*x)*(2*y);
	}
	
}
public class ex03shape {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		circle dnjs = new circle();
		sqare sq = new sqare();
		System.out.println("area is "+ dnjs.getarea()+"dulea is " + dnjs.getcir());
		System.out.println("area is "+ .sq.getarea() + "dulea is " + sq.getcir());
	}

}
