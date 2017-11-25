import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JScrollPane;

@SuppressWarnings("serial")
public class Viewer extends JFrame {
  public Viewer(ImageIcon target) {
	  System.out.println("creator called");
    ImageIcon ii = target;
    JScrollPane jsp = new JScrollPane(new JLabel(ii));
    jsp.getVerticalScrollBar().setUnitIncrement(20);
    getContentPane().add(jsp);
    setSize(1000, 750);
    setVisible(true);
  }

  public static void main(ImageIcon input) {
	  System.out.println("main mathod called");
    new Viewer(input);
  }
}
      