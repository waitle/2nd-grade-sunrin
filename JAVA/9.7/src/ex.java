import java.io.FileOutputStream;

public class ex {

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		FileOutputStream fo = new FileOutputStream("c.txt");
		int inp;
		while((inp=System.in.read())!=-1)
		{
			fo.write(inp);
			
		}
		fo.close();
	}

}
