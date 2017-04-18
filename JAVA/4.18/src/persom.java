
public class persom {
private String name;
private int age;
public persom()
{
	
}
public persom(String name, int age)
{
	this.name=name;
	this.age=age;
}
void showthis()
{
	System.out.println("name is "+ this.name);
	System.out.println("age is "+ this.age);
}
public String getName() {
	return name;
}
public void setName(String name) {
	this.name = name;
}
public int getAge() {
	return age;
}
public void setAge(int age) {
	this.age = age;
}

}
