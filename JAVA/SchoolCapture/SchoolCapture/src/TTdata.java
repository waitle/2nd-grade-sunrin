public class TTdata{
	static int runtime = 50;
	static int lessoncount = 7;
	final static int breaktime = 10;
	final static int lunchtime = 50;
	static String[] date = { "��", "ȭ", "��", "��", "��" };
	static String[][] subjects = new String[][]{{"���","�Ϻ���", "����","�ڹ�","ü��"}, {"����","���","����","�ڹ�","����"}, {"����","�ڹ�","����","����1","����"},
		{"�Ϻ���","�ڹ�","����2","����1","����"}, {"����","����","ȭ��","����","����"}, {"����", "����","����","�Ϻ���",""}, {"ȭ��","ü��","","����",""}};
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