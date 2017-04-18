
public class singer {
	private String name;
	private int count;
	public singer()
	{
		
	}
	public singer(String name, int count)
	{
		this.name=name;
		this.count=count;
	}
	void showthis()
	{
		System.out.println("name is "+ this.name);
		System.out.println(" is "+ this.count);
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getCount() {
		return count;
	}
	public void setCount(int count) {
		this.count = count;
	}
}
