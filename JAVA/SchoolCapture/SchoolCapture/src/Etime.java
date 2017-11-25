import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTable;
import javax.swing.JTextField;
import javax.swing.SwingConstants;
import javax.swing.table.DefaultTableCellRenderer;
import javax.swing.table.DefaultTableModel;
import javax.swing.table.TableColumnModel;
import javax.swing.JRadioButton;
import javax.swing.JLabel;
import java.util.Calendar;

import javax.swing.ButtonGroup;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.text.SimpleDateFormat;
import java.awt.event.ActionEvent;
import java.awt.Color;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.awt.Font;

@SuppressWarnings("serial")
public class Etime extends JPanel {
	private JTable table;
	private JTextField currentlessoncount;
	private JTextField txtYyyymd;
	String [] inputstring;

	/**
	 * Create the panel.
	 */
	public Etime() {
		setBackground(Color.DARK_GRAY);
		this.setSize(800, 600);
		this.setVisible(true);
		setLayout(null);
		
		Loadfile lf = new Loadfile();
		add(lf);
		
		//�ð�ǥ
		DefaultTableModel model = new DefaultTableModel(TTdata.subjects, TTdata.date) { // �� ����
			public boolean isCellEditable(int i, int c) {
				return false;
			}
		};
		table = new JTable(model);
		table.setFont(new Font("���� ����", Font.PLAIN, 14));
		table.setRowHeight(55); // ĭ�� ���� ũ��
		table.getTableHeader().setReorderingAllowed(false); // �̵� �Ұ�
		table.getTableHeader().setResizingAllowed(false); // ũ�� ���� �Ұ�

		JScrollPane scrollPane = new JScrollPane(table);
		scrollPane.setBounds(150, 25, 500, 273);
		this.add(scrollPane);

		DefaultTableCellRenderer tScheduleCellRenderer = new DefaultTableCellRenderer();
		 
		// DefaultTableCellHeaderRenderer�� ������ ��� ���ķ� ����
		tScheduleCellRenderer.setHorizontalAlignment(SwingConstants.CENTER);
		 
		// ������ ���̺��� ColumnModel�� ������
		TableColumnModel tcmSchedule = table.getColumnModel();
		 
		// �ݺ����� �̿��Ͽ� ���̺��� ��� ���ķ� ����
		for (int i = 0; i < tcmSchedule.getColumnCount(); i++) {
		tcmSchedule.getColumn(i).setCellRenderer(tScheduleCellRenderer);
		}
		//����ƽ ����
		JRadioButton static_status = new JRadioButton("static");
		static_status.setFont(new Font("���� ����", Font.PLAIN, 12));
		static_status.setForeground(Color.WHITE);
		static_status.setBackground(Color.DARK_GRAY);
		static_status.setSelected(true);
		static_status.setBounds(150, 320, 130, 30);
		this.add(static_status);

		//�ν���Ʈ ����
		JRadioButton instant_status = new JRadioButton("instant");
		instant_status.setFont(new Font("���� ����", Font.PLAIN, 12));
		instant_status.setForeground(Color.WHITE);
		instant_status.setBackground(Color.DARK_GRAY);
		instant_status.setBounds(450, 320, 130, 30);
		this.add(instant_status);

		//�����ð� ���ö�
		JLabel time = new JLabel("\uC218\uC5C5\uC2DC\uAC04");
		time.setFont(new Font("���� ����", Font.PLAIN, 12));
		time.setForeground(Color.WHITE);
		time.setBounds(150, 400, 80, 30);
		this.add(time);

		//40�� ����
		JRadioButton R40 = new JRadioButton("40\uBD84");
		R40.setFont(new Font("���� ����", Font.PLAIN, 12));
		R40.setForeground(Color.WHITE);
		R40.setBackground(Color.DARK_GRAY);
		R40.setBounds(238, 400, 62, 30);
		this.add(R40);

		//45�� ����
		JRadioButton R45 = new JRadioButton("45\uBD84");
		R45.setFont(new Font("���� ����", Font.PLAIN, 12));
		R45.setForeground(Color.WHITE);
		R45.setBackground(Color.DARK_GRAY);
		R45.setBounds(296, 400, 62, 30);
		this.add(R45);

		//50�� ����
		JRadioButton R50 = new JRadioButton("50\uBD84");
		R50.setFont(new Font("���� ����", Font.PLAIN, 12));
		R50.setForeground(Color.WHITE);
		R50.setBackground(Color.DARK_GRAY);
		R50.setSelected(true);
		R50.setBounds(362, 400, 62, 30);
		this.add(R50);

		ButtonGroup choose = new ButtonGroup();
		choose.add(static_status);
		choose.add(instant_status);

		ButtonGroup group = new ButtonGroup();
		group.add(R40);
		group.add(R45);
		group.add(R50);

		//�����ü�
		currentlessoncount = new JTextField();
		currentlessoncount.setForeground(Color.DARK_GRAY);
		currentlessoncount.setText(TTdata.getlessoncount());//�̸�����
		currentlessoncount.setBounds(260, 437, 120, 21);
		this.add(currentlessoncount);
		currentlessoncount.setColumns(10);

		//�����ü� ��
		JLabel InputLessonCount = new JLabel("\uC218\uC5C5\uC2DC\uC218");
		InputLessonCount.setFont(new Font("���� ����", Font.PLAIN, 12));
		InputLessonCount.setForeground(Color.WHITE);
		InputLessonCount.setBounds(150, 440, 57, 15);
		add(InputLessonCount);
		
		//Ȯ�ι�ư
		JButton button = new JButton("Ȯ��");
		button.setFont(new Font("���� ����", Font.PLAIN, 12));
		button.setFocusPainted(false);
		button.setBorderPainted(false);
		button.setForeground(new Color(20, 20, 20));
		button.setBackground(new Color(240, 240, 240));
		button.setBounds(530, 480, 100, 30);
		this.add(button);

		//�ν���Ʈ�Ǵ� ��¥��
		JLabel Editdate = new JLabel("\uC218\uC815\uD560 \uB0A0\uC9DC");
		Editdate.setFont(new Font("���� ����", Font.PLAIN, 12));
		Editdate.setForeground(Color.WHITE);
		Editdate.setBounds(150, 375, 80, 15);
		add(Editdate);

		//�ν���Ʈ�Ǵ� ��¥
		txtYyyymd = new JTextField();
		txtYyyymd.setForeground(Color.DARK_GRAY);
		txtYyyymd.setBounds(260, 372, 116, 21);
		SimpleDateFormat sdf = new SimpleDateFormat("yyyyMMdd");
		Calendar c1 = Calendar.getInstance();//���糯¥�� �̸�����
		String strToday = sdf.format(c1.getTime());
		txtYyyymd.setText(strToday);
		if(static_status.isSelected())
			txtYyyymd.setEditable(false);
		add(txtYyyymd);
		txtYyyymd.setColumns(10);

		// Ȯ�ι�ư�� ��������
		button.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				if (static_status.isSelected())// ����ƽ ����ϰ��
				{
					// �����ð� ����
					if (R40.isSelected()) {
						TTdata.runtime = 40;
					} else if (R45.isSelected()) {
						TTdata.runtime = 45;
					} else {
						TTdata.runtime = 50;
					}
					// ����ī��Ʈ ����
					TTdata.runtime = Integer.parseInt(currentlessoncount.getText());

				}
				else if (instant_status.isSelected())// �ν���Ʈ ����ϰ��
				{
					System.out.println("copy starat");
					TTdataException temp = new TTdataException();
					// �����ð� ����
					if (R40.isSelected()) {
						temp.runtime = 40;
					} else if (R45.isSelected()) {
						temp.runtime = 45;
					} else {
						temp.runtime = 50;
					}
					// ����ī��Ʈ ����
					temp.ExceptedDATE = txtYyyymd.getText();
					temp.lessoncount = Integer.parseInt(currentlessoncount.getText());
					for(int i=0;i<TTdataException.ekscnr.size();i++)//�̹� �߰��Ǿ��ִ� ��¥�� ����
					{
						if(TTdataException.ekscnr.get(i).ExceptedDATE.equals(temp.ExceptedDATE)||TTdataException.ekscnr.get(i).lessoncount==temp.lessoncount)
						{
							TTdataException.ekscnr.remove(i);
							System.out.println("exception overlaped");
						}
					}
					
					TTdataException.ekscnr.add(temp);//���൥���Ϳ� �߰�
				}
			}
		});
		static_status.addMouseListener(new MouseAdapter() {
			@Override
			public void mouseClicked(MouseEvent arg0) {
				if(static_status.isSelected())
				{
					System.out.println("mouse clicked and set mod as static");
					txtYyyymd.setEditable(false);
					remove(txtYyyymd);
					add(txtYyyymd);
					repaint();		
				}
			}
		});
		instant_status.addMouseListener(new MouseAdapter() {
			@Override
			public void mouseClicked(MouseEvent e) {
				if(instant_status.isSelected())
				{
					System.out.println("mouse clicked and set mod as instant");
					remove(txtYyyymd);
					txtYyyymd.setEditable(true);
					add(txtYyyymd);
					repaint();	
				}
			}
		});
	}

}