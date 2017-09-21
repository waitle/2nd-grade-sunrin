import java.io.FileInputStream;
import java.io.FileOutputStream;

public class ex01 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		// create stream
		FileInputStream fi = new FileInputStream("a.jpg");
		FileOutputStream fo = new FileOutputStream("b.jpg");
		// start data IO process with created stream
		int inp;
		while (true) {
			inp = fi.read();// read a pic 1B
			if (inp == -1) {
				break;
			}
			fo.write(inp);// write b pic 1B
			// close stream
			fo.close();
			fi.close();

		}
	}
}
