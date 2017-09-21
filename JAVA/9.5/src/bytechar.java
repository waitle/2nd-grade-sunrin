import java.io.InputStreamReader;
import java.io.Reader;

import javax.swing.plaf.synth.SynthSpinnerUI;

public class bytechar {

	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		int i ;
		Reader inp = new InputStreamReader(System.in);
		while (true)
		{			
			//i= System.in.read();
			i=inp.read();
			if(i==-1)
			{
				break;
			}
			System.out.print((char)i);
		}
		
	}

}
