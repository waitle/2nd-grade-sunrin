package ifmoon;

public class loop {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int sum=0;
//		for (int i=1;i<=10 ; i++)
//		{
//			if(i%2==0)
//				sum -=i;
//			else
//				sum +=i;
//		}
		int i=1;
		do
		{
			if(i%2==0)
				sum -=i;
			else
				sum +=i;
			i++;
		}while(i<=10);
		System.out.println(sum+"sum");
	}

}
