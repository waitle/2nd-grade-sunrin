package designpattern;

public class SunrinFactory implements IdeaFactory , AppFactory{

	@Override
	public void makeapp() {
		// TODO Auto-generated method stub
		System.out.println("making app..");
	}

	@Override
	public void makeidea() {
		// TODO Auto-generated method stub
		System.out.println("creating idea..");
	}

}
