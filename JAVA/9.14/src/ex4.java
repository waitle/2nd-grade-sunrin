import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.Writer;

public class ex4 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		Writer bw = new OutputStreamWriter(System.out);

		String input;
		while (true) {
			input = br.readLine();
			if (input == null) {
				break;
			}
			bw.write(input + "\n");
			bw.flush();

		}
		bw.close();
		br.close();
	}

}
