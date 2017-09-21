
public class Bex03 {

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		byte[] b = new byte[1024];
		int len =0;
		while(true)
		{
			len = System.in.read(b);
			if(len==-1)
				break;
			System.out.write(b, 0, len);
			
		}
	}

}
