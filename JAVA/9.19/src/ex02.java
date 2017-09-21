import java.io.FilterReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.Reader;

class Myfileter extends FilterReader {

	protected Myfileter(Reader in) {
		super(in);
		// TODO Auto-generated constructor stub
	}

	@Override
	public int read() throws IOException {
		// TODO Auto-generated method stub
		int input;
		return ((input=super.read())==-1)? input: Character.toUpperCase((char)input);
	}
}

public class ex02 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		Myfileter my = new Myfileter(new InputStreamReader(System.in));

		int input;
		while (true) {
			input = my.read();
			if (input == -1)
				break;
			System.out.println((char) input);
		}
		my.close();
	}

}
