import java.io.File;

public class filex01 {
	public static void main(String[] args) {
		File file = new File("fileex1.java");
		System.out.println("file name is " + file.getName());
		System.out.println("is file really exist?" + file.exists());
		System.out.println("is property file?" + file.isDirectory());
		System.out.println("what size" + file.length());
		
		System.out.println("ha we dirctory and files");
		File dir = new File (".");
		String [] lists = dir.list();
		for(String s:lists)
			System.out.println(s);
		System.out.println("-----------------------");
		File[]files = dir.listFiles();
		for(File f : files)
			System.out.println(f.getName());
	}
}
