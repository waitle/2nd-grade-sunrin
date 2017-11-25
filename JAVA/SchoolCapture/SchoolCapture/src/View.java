import java.awt.Color;

import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTable;
import javax.swing.SwingConstants;
import javax.swing.table.DefaultTableCellRenderer;
import javax.swing.table.DefaultTableModel;
import javax.swing.table.TableColumnModel;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import java.awt.Font;

@SuppressWarnings("serial")
public class View extends JPanel {
	private JTable table;
	
	public View() {
		setBackground(Color.DARK_GRAY);
		this.setSize(800, 550);
		this.setVisible(true);
		setLayout(null);
		
		JButton refresh = new JButton("\uC0C8\uB85C\uACE0\uCE68");
		refresh.setFocusPainted(false);
		refresh.setBorderPainted(false);
		refresh.setBackground(new Color(220, 220, 220));
		refresh.setBounds(630, 480, 97, 23);
		add(refresh);
		
		Loadfile lf = new Loadfile();
		lf.setBounds(0, 0, 800, 550);
		add(lf);
				
		DefaultTableModel mod = new DefaultTableModel(TTdata.subjects, TTdata.date) { // 셀 수정
			public boolean isCellEditable(int i, int c) {
				return false;
			}
		};
		table = new JTable(mod);
		table.setFont(new Font("맑은 고딕", Font.PLAIN, 15));
		table.setModel(mod);
		table.setRowHeight(55); // 칸의 세로 크기
		table.getTableHeader().setReorderingAllowed(false); // 이동 불가
		table.getTableHeader().setResizingAllowed(false); // 크기 수정 불가
		
		JScrollPane scrollPane = new JScrollPane(table);
		scrollPane.setBounds(150, 25, 500, 410);
		this.add(scrollPane);
		
		DefaultTableCellRenderer tScheduleCellRenderer = new DefaultTableCellRenderer();
		 
		// DefaultTableCellHeaderRenderer의 정렬을 가운데 정렬로 지정
		tScheduleCellRenderer.setHorizontalAlignment(SwingConstants.CENTER);
		 
		// 정렬할 테이블의 ColumnModel을 가져옴
		TableColumnModel tcmSchedule = table.getColumnModel();
		 
		// 반복문을 이용하여 테이블을 가운데 정렬로 지정
		for (int i = 0; i < tcmSchedule.getColumnCount(); i++) {
		tcmSchedule.getColumn(i).setCellRenderer(tScheduleCellRenderer);
		}
		
		refresh.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				mod.fireTableDataChanged();
			}
		});
	}

}
