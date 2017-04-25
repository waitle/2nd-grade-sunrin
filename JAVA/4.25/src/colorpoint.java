
public class colorpoint extends point {

	private String color;
	colorpoint(int a, int b, String c)
	{
		super.setX(a);
		super.setY(b);
		color=c;
	}
	public String getColor() {
		return color;
	}

	public void setColor(String color) {
		this.color = color;
	}
	void show()
	{
		System.out.println("location "+ super.getX()+ ":"+super.getY()+" "+color);
	}
}
