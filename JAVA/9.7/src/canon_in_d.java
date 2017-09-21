import java.util.StringTokenizer;

public class canon_in_d {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		StringTokenizer st = new StringTokenizer("1+2+3+4+5+6+7+8+9+10", "+");
		System.out.println("current tokens count : " + st.countTokens());
		int total=0;
		while(st.hasMoreTokens())
		{
			total += Integer.parseInt(st.nextToken());
		}
		System.out.println(total);
	}

}
