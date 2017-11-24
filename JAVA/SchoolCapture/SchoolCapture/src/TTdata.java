public class TTdata{
	static int runtime = 50;
	static int lessoncount = 7;
	final static int breaktime = 10;
	final static int lunchtime = 50;
	static String[] date = { "월", "화", "수", "목", "금" };
	static String[][] subjects = new String[][]{{"상경","일본어", "미적","자바","체육"}, {"미적","상경","겜프","자바","디일"}, {"문학","자바","겜프","웹프1","영어"},
		{"일본어","자바","웹프2","웹프1","진로"}, {"겜프","음악","화학","영어","미적"}, {"겜프", "영어","문학","일본어",""}, {"화학","체육","","미적",""}};
	public static String getlessoncount()
	{
		return String.valueOf(lessoncount);
		
	}
	public static int getstarttime(int n)
	{
		//set form hhmmss
		int h=8;
		int m=40;
		int result=0;
		m += (runtime*(n-1))+(breaktime*(n-1));
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
	public static int getendtime(int n)
	{
		//set form hhmmss
		int h=8;
		int m=40;
		int result=0;
		m += runtime*n+breaktime*n;
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
}
