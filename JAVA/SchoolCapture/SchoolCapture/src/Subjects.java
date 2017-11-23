import javax.swing.JPanel;
import java.awt.Color;
import java.awt.Label;
import javax.swing.JTextField;
import javax.swing.JLabel;
import javax.swing.JSeparator;
import javax.swing.SwingConstants;
import java.awt.BorderLayout;
import java.awt.GridLayout;
import java.awt.CardLayout;
import javax.swing.BoxLayout;
import java.awt.GridBagLayout;
import java.awt.GridBagConstraints;
import java.awt.Insets;
import com.jgoodies.forms.layout.FormLayout;
import com.jgoodies.forms.layout.ColumnSpec;
import com.jgoodies.forms.layout.FormSpecs;
import com.jgoodies.forms.layout.RowSpec;
import net.miginfocom.swing.MigLayout;
import java.awt.FlowLayout;
import java.awt.Component;
import javax.swing.Box;

public class Subjects extends JPanel {
	private JTextField subjectname;
	private JTextField teacher;

	/**
	 * Create the panel.
	 */
	public Subjects() {
		setBackground(Color.PINK);
		setLayout(new FlowLayout(FlowLayout.CENTER, 5, 5));
		
		JLabel lblNewLabel = new JLabel("\uACFC\uBAA9\uBA85");
		lblNewLabel.setHorizontalAlignment(SwingConstants.CENTER);
		add(lblNewLabel);
		
		JLabel label = new JLabel("\uC120\uC0DD\uB2D8 \uC131\uD568");
		add(label);
		
		subjectname = new JTextField();
		add(subjectname);
		subjectname.setColumns(10);
		
		teacher = new JTextField();
		add(teacher);
		teacher.setColumns(10);
		
		JLabel lblE = new JLabel("E\uBA54\uC77C");
		add(lblE);
		
		JLabel label_1 = new JLabel("");
		add(label_1);

	}
}
