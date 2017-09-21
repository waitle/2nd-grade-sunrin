import java.io.FileReader;
import java.io.FileWriter;

public class picturecopy {
	public static void main(String[] args) throws Exception {
		FileReader fr = new FileReader("duke1.jpg");
		FileWriter fw = new FileWriter("copy.jpg");
		int input;
		while (true) {
			input = fr.read();
			if (input == -1)
				break;
			fw.write(input);
		}
		fw.close();
		fr.close();
	}
}
