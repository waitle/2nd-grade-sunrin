package pack;

public class TELE {
	public static void main(String[] args)
	{
		
		TELE1 tv= new TELE1();
		TELE1 tvy= new TELE1(); 
		tv.channel=7;
		tv.vol=10;
		tv.onf=true;
		tvy.channel=9;
		tvy.vol=12;
		tvy.onf=true;
		System.out.println("channel: " + tv.channel+"and vol is"+ tv.vol + "and iv is" + tv.onf);
		System.out.println("y channel: " + tvy.channel + "and yvol is"+ tvy.vol + " and iv is" + tvy.onf);
	}
}
