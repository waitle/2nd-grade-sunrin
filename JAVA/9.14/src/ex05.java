import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.io.Writer;

public class ex05 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader fr = new BufferedReader(new FileReader("a.txt"));
		Writer w = new OutputStreamWriter(System.out);

		String input=null;
		while (true) {
			input = fr.readLine();
			if (input == null) {
				break;
			}
			w.write(input + "\n");
			w.flush();

		}
		fr.close();
		w.close();
		
	}

}
