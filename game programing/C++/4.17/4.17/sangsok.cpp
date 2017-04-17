#include<iostream>
#include<string>
using namespace std;

class point{
private:
	int x, y;
public:
	void set(int inx, int iny)
	{
		x = inx, y = iny;
	}
	void show()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
class pointcolor :public point{
private:
	string color;
public:
	void setcolor(string incolor)
	{
		color = incolor;
	}
	void showcolor()
	{
		cout << color << ":";
		show();
	}
};

int main()
{
	point p;
	pointcolor cp;
	cp.set(3, 4);
	cp.setcolor("red");
	return 0;
}