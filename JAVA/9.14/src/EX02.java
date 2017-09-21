import java.io.FileReader;
import java.io.FileWriter;

public class EX02 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		FileReader fr = new FileReader("a.txt");
		FileWriter fw = new FileWriter("copy.txt");
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
