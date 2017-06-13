class shapet {
	int x, y;
	public void draw()
	{
		System.out.println("draw shape");
	}
}

class rec extends shapet {
	int w,h;
	public void draw()
	{
		System.out.println("draw rec");
	}
}
class cir extends shape{
	public void draw()//mathod overriding
	{
		System.out.println("draw circle");
	}
}
public class shape {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		shape[] shapearr = new shape[3];
		//for(int i =0;i<shapearr.length;i++)
		//{
		//	shapearr[i].draw();
		//}
		
		//shapet p = new rec();
		//p.x =2;
		//p.y = 10;
		//rec r = (rec)p;
		//r.w = 30;
		//r.h=50;
	}

}
