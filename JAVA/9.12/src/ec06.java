import java.io.File;

public class ec06 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int count=0;
		File dir = new File (".");
		String [] lists = dir.list();
		for(String s:lists)
			count++;
		System.out.println("count of dir" + count);
		System.out.println("-----------------------");
		File[]files = dir.listFiles();
		count=0;
		for(File f : files)
			count++;
		System.out.println("count of file" + count);
	}

}
