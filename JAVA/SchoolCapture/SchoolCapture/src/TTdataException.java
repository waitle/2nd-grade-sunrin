import java.util.ArrayList;

public class TTdataException {
	int runtime = 50;
	int lessoncount = 7;
	final int breaktime = 10;
	final int lunchtime = 50;
	String ExceptedDATE = new String();
	String temp = new String();
	
	public int getstarttime(int n)
	{
		//set form hhmmss
		int h=8;
		int m=40;
		int result;
		m += runtime*(n-1)+breaktime*(n-1);
		if(n>=5)
		{
			m += lunchtime-10;
		}
		if(m>59)
		{
			h = h+m/60;
			m = m%60;
		}
		result = h*10000+m*100;
		return result;
	}
	public int getendtime(int n)
	{
		//set form hhmmss
		int h=8;
		int m=40;
		int result;
		m += runtime*n+breaktime*n;
		if(n>=
				5)
		{
			m += lunchtime-10;
		}
		if(m>59)
		{
			h = h+m/60;
			m = m%60;
		}
		result = h*10000+m*100;
		return result;
	}
	static ArrayList<TTdataException> ekscnr = new ArrayList<>();
}
