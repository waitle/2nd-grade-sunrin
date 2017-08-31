
public class exceptionhandling {
	public static void method() throws ArrayIndexOutOfBoundsException {
		String[] irum = new String[3];
		irum[3] = "ȫ�浿";
	}
	public static void main(String[] args) {
		try {
			new exceptionhandling().method();
		} catch (Exception e) {
			System.out.println("out of index");
		}
	}
}
