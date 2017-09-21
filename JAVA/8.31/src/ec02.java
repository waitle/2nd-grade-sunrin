
public class ec02 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int bt =0;
		//ctrl+z means end;
		while(true)
		{
			bt = System.in.read();
			if(bt==-1)
				break;
			System.out.println((char)bt);	
		}
	}

}
