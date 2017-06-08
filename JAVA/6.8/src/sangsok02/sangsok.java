package sangsok02;

class father {
	public void say() {
		System.out.println("im father");
	}
}

class child {
	public void say() {
		System.out.println("im child");
	}
}

public class sangsok {
	public static void main(String[] args) {
		new child().say();
	}
}
