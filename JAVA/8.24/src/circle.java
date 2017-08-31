
public class circle {
	public static void printmax(double... n) {
		double max;
		if (n.length == 0)
			System.out.println("no input");
		else {
			max = n[0];
			for (int i = 0; i < n.length; i++) {
				if (n[i] > max)
					max = n[i];
			}
			System.out.println(max);
		}
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		circle c = new circle();
		c.printmax();
		c.printmax(15, 4864, 31, 5, 3);
		c.printmax(new double[] { 1, 564, 31, 5 });

	}

}