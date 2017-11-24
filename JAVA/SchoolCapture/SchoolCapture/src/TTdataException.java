import java.util.ArrayList;

public class TTdataException {
	int runtime = 50;
	int lessoncount = 6;
	final int breaktime = 10;
	final int lunchtime = 50;
	int row = lessoncount;
	String[] date = { "월", "화", "수", "목", "금" };
	String[][] subjects = new String[lessoncount][4];
	String ExceptedDATE = new String();
	static ArrayList<TTdataException> ekscnr = new ArrayList<>();
}
