package designpattern;

public class Client extends SunrinFactory{

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		SunrinFactory SF = new SunrinFactory();
		SF.makeidea();
		SF.makeapp();
	}

}
