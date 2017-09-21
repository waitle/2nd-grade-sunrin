import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;

public class ex01 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		//File file = new File("a.txt");
		//FileWriter fw = new FileWriter(file);
		//PrintWriter pw = new PrintWriter(fw);
		PrintWriter pw = new PrintWriter("b.txt");
		pw.printf("%d + %d = %d \n", 1, 2, (1+2));
		pw.println("tuchi pazi po zi");
		pw.print("bballa tu na");
		pw.close();
		
	}

}
