import java.util.Scanner;

public class challenge03 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a, b, c=0, d=0, d=0;
		System.out.println("input array");
		Scanner input = new Scanner(System.in);
		a = input.nextInt();
		int arr []= new int[a];
		System.out.println("print array");
		for(b=0;b<a;b++)
		{
			arr[b]= b+1;
			d+=b;
			System.out.println(arr[b]);
			if(arr[b]%2==0)
			{
				c++;
			}
			else
				d++;
		}
		System.out.println("jjack" + c + "odd" + d + "hap" + d);
		
	}
	

}