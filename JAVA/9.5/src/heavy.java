import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.FileInputStream;
import java.io.FileOutputStream;

public class heavy {

	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedInputStream fi = new BufferedInputStream(new FileInputStream("heavy.data"));
		BufferedOutputStream fo = new BufferedOutputStream(new FileOutputStream("copy.data"));
		int i;
		long start = System.currentTimeMillis();
		while((i=fi.read())!=-1)
		{
			fo.write(i);
		}
		long end = System.currentTimeMillis();
		fo.close();
		fi.close();
		System.out.println("time" + (end-start));
	}

}
