package ex;

class sunrin {
	String department;
}

class student extends sunrin {
	int grade;
	int clas;
	int num;
	String name;
	String currntsub;
}

class teacher extends sunrin {
	String name;
	String currntsub;
}

public class exforUML {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		student taekseo = new student();
		teacher jungtaeSam = new teacher();
		taekseo.department = "web";
		taekseo.grade = 2;
		taekseo.num = 12;
		taekseo.clas = 5;
		taekseo.name = "�ü�";
		taekseo.currntsub = "club activity";
		jungtaeSam.currntsub = "unknown";
		jungtaeSam.name = "���½�";
		jungtaeSam.department = "web";
		System.out.println(taekseo);
	}

}
