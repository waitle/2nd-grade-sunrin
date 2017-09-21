import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.Writer;

public class ex06 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int a=0, b = 0;
		String input;
		while (true) {
			input = br.readLine();
			if (input == null) {
				break;
			}
			a = Integer.parseInt(input);
		}
		while (true) {
			input = br.readLine();
			if (input == null) {
				break;
			}
			b = Integer.parseInt(input);
		}
		int sum = a+b;
		System.out.println(((a + b) / 2) + a + "+" + b + "="+sum);
		
		System.out.println("avg = " + sum/2);
		br.close();
	}

}
