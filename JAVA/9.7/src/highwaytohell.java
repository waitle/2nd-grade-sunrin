import java.io.FileInputStream;

public class highwaytohell {

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		FileInputStream fi = new FileInputStream("C:\\windowsw\\system.ini");
		int inp;
		while((inp=fi.read())!=-1)
		{
			System.out.println(inp);
			
		}
		
	}

}
