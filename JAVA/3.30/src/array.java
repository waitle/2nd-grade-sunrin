
public class array {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a[] = new int[]{9, 4, 3, 8, 2};
		int sum=0;
		System.out.println(a[4]);
		System.out.println(a[3]);
		System.out.println(a[2]);
		System.out.println(a[1]);
		System.out.println(a[0]);
		System.out.println("ÃÑÇÕ= "+ (a[0]+a[2]+a[1]+a[3]+a[4]));
		for(int i =0;i<5;i++)
		{
			if(a[i]%2==0)
				sum+=1;
		}
		System.out.println("Â¦¼öÀÇ °¹¼ö " + sum);
		sum=0;
		for(int i =0;i<5;i++)
		{
			if(a[i]%2==1)
				sum+=1;
		}
		System.out.println("È¦¼öÀÇ °¹¼ö " + sum);
	}

}
