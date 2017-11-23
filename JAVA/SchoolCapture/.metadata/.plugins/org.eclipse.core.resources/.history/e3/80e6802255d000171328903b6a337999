import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JTable;
import javax.swing.JScrollPane;

public class View extends JPanel {

	private JPanel contentPane;
	private JTable table;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					View frame = new View();
					frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the frame.
	 */
	public View() {
		this.setSize(800, 600);
        this.setVisible(true);

		int row = 7;
		int column = 5; // 요일

		String[][] subjects = new String[row][column]; // 과목배열

		String[] date = { "월", "화", "수", "목", "금" };

		table = new JTable(subjects, date);
		table.setRowHeight(50); // 칸의 세로 크기

		table.setBounds(41, 41, 400, 400); // 표 x,y,표크기 x,y
		table.getTableHeader().setReorderingAllowed(false); // 이동 불가
		table.getTableHeader().setResizingAllowed(true); // 크기 수정 불가

		JScrollPane scrollPane = new JScrollPane(table);
		scrollPane.setBounds(40, 40, 400, 375);
		this.add(scrollPane);

	}
}