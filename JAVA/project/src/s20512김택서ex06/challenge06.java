package s20512김택서ex06;

import java.util.Scanner;

public class challenge06 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input  = new Scanner(System.in);
		System.out.printf("배열의 크기를 입력 : ");
		int a=input.nextInt();
		int arr[] = new int[6];
		System.out.println("#배열의 데이터를 출력#");
		for(int i =0;i<a;i++)
		{
			arr[i]=(i+1)*6;
			System.out.println("test[" + i + "]=" + arr[i]);
		}
	}

}
