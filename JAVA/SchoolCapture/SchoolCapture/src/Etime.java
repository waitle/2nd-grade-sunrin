import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTable;
import javax.swing.JTextField;
import javax.swing.JRadioButton;
import javax.swing.JLabel;
import java.util.Calendar;

import javax.swing.ButtonGroup;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.text.SimpleDateFormat;
import java.awt.event.ActionEvent;
import java.awt.Color;

public class Etime extends JPanel {
	private JTable table;
	private JTextField currentlessoncount;
	private JTextField txtYyyymd;

	/**
	 * Create the panel.
	 */
	public Etime() {
		this.setSize(800, 600);
		this.setVisible(true);
		TTdata forEdit = new TTdata();
		setLayout(null);
		
		//시간표
		table = new JTable(forEdit.subjects, forEdit.date);
		table.setRowHeight(35); // 칸의 세로 크기
		table.getTableHeader().setReorderingAllowed(false); // 이동 불가
		table.getTableHeader().setResizingAllowed(false); // 크기 수정 불가

		JScrollPane scrollPane = new JScrollPane(table);
		scrollPane.setBounds(150, 0, 500, 35 * forEdit.lessoncount + 25);
		this.add(scrollPane);

		//스태틱 선택
		JRadioButton static_status = new JRadioButton("static");
		static_status.setSelected(true);
		static_status.setBounds(150, 320, 130, 30);
		this.add(static_status);

		//인스턴트 선택
		JRadioButton instant_status = new JRadioButton("instant");
		instant_status.setBounds(450, 320, 130, 30);
		this.add(instant_status);

		//Date today = new Date();
		//int month = today.getMonth() + 1;

		//수업시간 선택라벨
		JLabel time = new JLabel("수업시간 : ");
		time.setBounds(150, 400, 80, 30);
		this.add(time);

		//40분 선택
		JRadioButton R40 = new JRadioButton("40");
		R40.setBounds(238, 400, 45, 30);
		this.add(R40);

		//45분 선택
		JRadioButton R45 = new JRadioButton("45");
		R45.setBounds(288, 400, 45, 30);
		this.add(R45);

		//50분 선택
		JRadioButton R50 = new JRadioButton("50");
		R50.setSelected(true);
		R50.setBounds(338, 400, 45, 30);
		this.add(R50);

		ButtonGroup choose = new ButtonGroup();
		choose.add(static_status);
		choose.add(instant_status);

		ButtonGroup group = new ButtonGroup();
		group.add(R40);
		group.add(R45);
		group.add(R50);

		//수업시수
		currentlessoncount = new JTextField();
		currentlessoncount.setForeground(Color.LIGHT_GRAY);
		currentlessoncount.setText(forEdit.getlessoncount());//미리셋팅
		currentlessoncount.setBounds(238, 434, 120, 27);
		this.add(currentlessoncount);
		currentlessoncount.setColumns(10);

		//수업시수 라벨
		JLabel InputLessonCount = new JLabel("\uC218\uC5C5\uC2DC\uC218");
		InputLessonCount.setBounds(160, 440, 57, 15);
		add(InputLessonCount);
		
		//확인버튼
		JButton button = new JButton("확인");
		button.setBounds(530, 480, 100, 30);
		this.add(button);

		//인스턴트되는 날짜라벨
		JLabel Editdate = new JLabel("\uC218\uC815\uD560 \uB0A0\uC9DC");
		Editdate.setBounds(150, 375, 64, 15);
		add(Editdate);

		//인스턴트되는 날짜
		txtYyyymd = new JTextField();
		txtYyyymd.setForeground(Color.LIGHT_GRAY);
		txtYyyymd.setBounds(240, 372, 116, 21);
		SimpleDateFormat sdf = new SimpleDateFormat("yyyyMMdd");
		Calendar c1 = Calendar.getInstance();//현재날짜로 미리셋팅
		String strToday = sdf.format(c1.getTime());
		txtYyyymd.setText(strToday);
		if (instant_status.isSelected())// 인스턴트 모드일때만 활성화
			txtYyyymd.enable(true);
		else if (static_status.isSelected())
			txtYyyymd.enable(false);
		add(txtYyyymd);
		txtYyyymd.setColumns(10);

		// 확인버튼을 눌렀을때
		button.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				if (static_status.isSelected())// 스태틱 모드일경우
				{
					// 입력된 시간표과목들 저장
					for (int i = 0; i < forEdit.lessoncount; i++)// 시간표의 처음부터
					{
						for (int j = 0; i < 5; j++) {
							System.out.println(i+j);
							if(table.getValueAt(i, j)!=null&&forEdit.subjects[i][j]!=null)
							{
								forEdit.subjects[i][j] = table.getValueAt(i, j).toString();
							}
							
						}
					}
					// 수업시간 저장
					if (R40.isSelected()) {
						forEdit.runtime = 40;
					} else if (R45.isSelected()) {
						forEdit.runtime = 45;
					} else {
						forEdit.runtime = 50;
					}
					// 레슨카운트 저장
					forEdit.runtime = Integer.parseInt(InputLessonCount.getText());

				} else if (instant_status.isSelected())// 인스턴트 모드일경우
				{
					TTdataException temp = new TTdataException();
					for (int i = 0; i < forEdit.lessoncount; i++)// 시간표의 처음부터
					{
						for (int j = 0; i < 5; j++) {
							temp.subjects[i][j] = table.getValueAt(i, j).toString();//시간표복사
						}
					}
					// 수업시간 복사
					if (R40.isSelected()) {
						temp.runtime = 40;
					} else if (R45.isSelected()) {
						temp.runtime = 45;
					} else {
						temp.runtime = 50;
					}
					// 레슨카운트 복사
					temp.lessoncount = Integer.parseInt(InputLessonCount.getText());
					temp.ExceptedDATE = txtYyyymd.getText();
					temp.ekscnr.add(temp);//단축데이터에 추가
				}
			}
		});
	}

}