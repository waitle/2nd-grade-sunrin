import java.util.StringTokenizer;

public class token {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		StringTokenizer st = new StringTokenizer("���/��/������", "/");
		System.out.println("current tokens count : " + st.countTokens());
		while(st.hasMoreTokens())
			System.out.println(st.nextToken());
		System.out.println("tokens count after loop : " + st.countTokens());
		
	}

}
