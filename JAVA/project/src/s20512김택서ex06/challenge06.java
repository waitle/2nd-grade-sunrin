package s20512���ü�ex06;

import java.util.Scanner;

public class challenge06 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input  = new Scanner(System.in);
		System.out.printf("�迭�� ũ�⸦ �Է� : ");
		int a=input.nextInt();
		int arr[] = new int[6];
		System.out.println("#�迭�� �����͸� ���#");
		for(int i =0;i<a;i++)
		{
			arr[i]=(i+1)*6;
			System.out.println("test[" + i + "]=" + arr[i]);
		}
	}

}
