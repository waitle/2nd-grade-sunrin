package test;

import java.awt.Graphics;
import javax.swing.JApplet;

public class fish extends JApplet {
	public void paint(Graphics g) {
		g.drawRect(30, 50, 330, 210);
		g.drawArc(30, 0, 300, 200, 210, 150);
		g.drawArc(30, 100, 300, 200, 0, 150);
		g.drawOval(70, 135, 30, 30);
		g.fillOval(75, 140, 20, 20);
		g.drawLine(330, 100, 330, 200);
	}
}
