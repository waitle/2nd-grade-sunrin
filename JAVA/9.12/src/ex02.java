import java.io.File;

public class ex02 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		File F = new File("C:/windows/system.ini");
		String res = null;
		if(F.isFile()) res="file";
		else if(F.isDirectory()) res="dir";
		System.out.println(F.getPath() + "is " + res);
	}

}
