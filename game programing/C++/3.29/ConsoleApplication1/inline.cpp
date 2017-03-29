#include <iostream>
#include <string>
using namespace std;

class shit{
	int w, h;
public:
	int getarea();
	void setw(int w);
	void seth(int h);
	
};

int shit::getarea()
{
	return w*h;
}
void shit::setw(int w)
{
	shit::w = w;
}
void shit::seth(int h)
{
	shit::h = h;
}


int main()
{
	shit s;
	s.seth(3);
	s.setw(5);
	cout << "total" << s.getarea() << endl;

}