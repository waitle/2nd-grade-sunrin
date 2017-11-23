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
		int column = 5; // ����

		String[][] subjects = new String[row][column]; // ����迭

		String[] date = { "��", "ȭ", "��", "��", "��" };

		table = new JTable(subjects, date);
		table.setRowHeight(50); // ĭ�� ���� ũ��

		table.setBounds(41, 41, 400, 400); // ǥ x,y,ǥũ�� x,y
		table.getTableHeader().setReorderingAllowed(false); // �̵� �Ұ�
		table.getTableHeader().setResizingAllowed(true); // ũ�� ���� �Ұ�

		JScrollPane scrollPane = new JScrollPane(table);
		scrollPane.setBounds(40, 40, 400, 375);
		this.add(scrollPane);

	}
}