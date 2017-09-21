import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.Reader;

public class ex01 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		InputStream is = System.in;
		Reader r = new InputStreamReader(is);
		
		int input;
		while (true){
			input = r.read();
			if(input ==-1)
			{
				break;
			}
			System.out.println((char)input);
		}
		r.close();
	}

}
