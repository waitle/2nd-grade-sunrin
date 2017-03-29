#include <iostream>
#include <string>
using namespace std;

class shit{
	int w, h;
public:
	int getarea()
	{
		return w*h;
	}
	void setw(int w)
	{
		shit::w = w;
	}
	void seth(int h)
	{
		shit::h = h;
	}
};


int main()
{
	shit s;
	s.seth(3);
	s.setw(5);
	cout << "total" << s.getarea() << endl;

}