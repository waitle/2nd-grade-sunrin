import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;

public class ex08 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new FileReader("c.txt"));
		BufferedWriter bw = new BufferedWriter(new FileWriter("copy.txt"));

		String inp;
		while ((inp = br.readLine()) != null) {
			bw.write(inp);
			bw.newLine();
			
		}
		bw.close();
		br.close();
	}

}
