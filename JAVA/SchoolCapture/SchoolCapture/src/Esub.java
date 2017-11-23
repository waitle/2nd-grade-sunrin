import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTextField;
import javax.swing.JLabel;
import javax.swing.JButton;
import javax.swing.JTable;
import javax.swing.ScrollPaneConstants;
import javax.swing.table.DefaultTableModel;

import java.awt.Color;
import java.awt.event.ActionListener;
import java.util.ArrayList;
import java.awt.event.ActionEvent;

public class Esub extends JPanel {
	private JTextField name;
	private JTextField teacher;
	private JTextField email;
	private JTextField phone;
	ArrayList<Subjectdata> Sdata = new ArrayList<>();
	private JTable table;

	/**
	 * Create the panel.
	 */
	public Esub() {

		this.setSize(800, 540);
		setLayout(null);

		JScrollPane scrollPane = new JScrollPane();
		scrollPane.setHorizontalScrollBarPolicy(ScrollPaneConstants.HORIZONTAL_SCROLLBAR_NEVER);
		scrollPane.setBounds(0, 0, 800, 540);
		add(scrollPane);

		JPanel panel = new JPanel();
		panel.setBackground(Color.DARK_GRAY);
		scrollPane.setViewportView(panel);
		panel.setLayout(null);

		name = new JTextField();
		name.setColumns(10);
		name.setBounds(312, 352, 116, 21);
		panel.add(name);

		teacher = new JTextField();
		teacher.setColumns(10);
		teacher.setBounds(312, 383, 116, 21);
		panel.add(teacher);

		email = new JTextField();
		email.setColumns(10);
		email.setBounds(312, 414, 116, 21);
		panel.add(email);

		phone = new JTextField();
		phone.setColumns(10);
		phone.setBounds(312, 445, 116, 21);
		panel.add(phone);

		JLabel Lname = new JLabel("\uACFC\uBAA9\uBA85");
		Lname.setForeground(Color.WHITE);
		Lname.setBounds(243, 355, 57, 15);
		panel.add(Lname);

		JLabel Lteacher = new JLabel("\uC120\uC0DD\uB2D8 \uC131\uD568");
		Lteacher.setForeground(Color.WHITE);
		Lteacher.setBounds(243, 386, 69, 15);
		panel.add(Lteacher);

		JLabel Lemail = new JLabel("\uC774\uBA54\uC77C");
		Lemail.setForeground(Color.WHITE);
		Lemail.setBounds(243, 417, 57, 15);
		panel.add(Lemail);

		JLabel Lphone = new JLabel("\uC5F0\uB77D\uCC98");
		Lphone.setForeground(Color.WHITE);
		Lphone.setBounds(243, 448, 57, 15);
		panel.add(Lphone);

		JButton delete = new JButton("\uC0AD\uC81C");
		delete.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				if (checktrue(name.getText()))// 이미 추가되어있는 과목인지 검사
				{
					Sdata.remove(checklocation(name.getText()));
				} else// 아닐경우
				{
					name.setText(null);
					teacher.setText(null);
					email.setText(null);
					phone.setText(null);
				}
			}
		});
		delete.setBounds(505, 505, 97, 23);
		panel.add(delete);

		JButton confirm = new JButton("\uD655\uC778");
		confirm.setBounds(614, 505, 97, 23);
		panel.add(confirm);

		String[][] subjects = new String[Sdata.size()][4];
		for (int i = 0; i < Sdata.size(); i++)// Arraylist인 Sdata에있는 과목정보를 이차원
												// 배열로 전환
		{
			System.out.println("array list data copy to Sdata");
			subjects[i][0] = Sdata.get(i).name;
			subjects[i][1] = Sdata.get(i).teacher;
			subjects[i][2] = Sdata.get(i).Email;
			subjects[i][3] = Sdata.get(i).phone;
		}

		String[] cal = { "과목", "선생님", "이메일", "연락처", "업로드된 사진수" };
		DefaultTableModel mod = new DefaultTableModel(subjects, cal) { // 셀 수정 비활성화
			public boolean isCellEditable(int i, int c) {
				return false;
			}
		};

		table = new JTable(mod);
		table.setBounds(98, 10, 574, 311);
		table.getTableHeader().setReorderingAllowed(false); // 이동 불가
		table.getTableHeader().setResizingAllowed(true); // 크기 수정 불가\
		table.setRowHeight(30); // 칸의 세로 크기
		panel.add(table);
		this.setVisible(true);

		JScrollPane scrollPane1 = new JScrollPane(table);
		scrollPane1.setEnabled(false);
		scrollPane1.setBounds(59, 35, 671, 302);
		panel.add(scrollPane1);

		confirm.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				// 새로 입력된 값들을 과목데이터에 저장
				Subjectdata temp = new Subjectdata();
				temp.name = name.getText();
				temp.Email = email.getText();
				temp.phone = phone.getText();
				temp.teacher = teacher.getText();
				Sdata.add(temp);

				// 현재 입력되어있는 값들을 초기화
				name.setText(null);
				teacher.setText(null);
				email.setText(null);
				phone.setText(null);

				// 리스트 새로고침
				panel.remove(table);
				panel.add(table);
			}
		});

	}

	public boolean checktrue(String target)//타겟의 이름을 가진 과목이 있는지 검사
	{
		for(int i=0;i<Sdata.size();i++)
		{
			if(target.equals(Sdata.get(i).name))
				return true;
		}
		return false;
	}
	public int checklocation(String target)//타겟 과목의 어레이 리스크상 위치를 반환
	{
		for(int i=0;i<Sdata.size();i++)
		{
			if(target.equals(Sdata.get(i).name))
				return i;
		}
		return -1;
	}

}
