
public class point {
	private int x, y;
	point(){}
	point(int a, int b) {
		x = a;
		y = b;
	}

	public int getX() {
		return x;
	}

	public void setX(int x) {
		this.x = x;
	}

	public int getY() {
		return y;
	}

	public void setY(int y) {
		this.y = y;
	}

	void show() {
		System.out.println("location " + x +":"+ y);
	}

	void show(boolean val) {
		if (val = true) {
			System.out.println("locaion " + x +":"+ y + "is deleted");
		} else {
			System.out.println("lcation " + x +":"+ y);
		}
	}
}
