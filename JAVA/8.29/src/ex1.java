
public class ex1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int [] array = new int[10];
		for(int i=0;i<array.length;i++)
		{
			array[i] = i +1;
		}
		try{
			array[10]=11;
		}catch(ArrayIndexOutOfBoundsException rEkr)
		{
			System.out.println("rekt");
		}
		System.out.println("am i rekt?");
		
	}

}
