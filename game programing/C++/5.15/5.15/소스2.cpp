#include <iostream>

using namespace std;

class shape{
protected:
	int x, y;
public:
	void setor(int x, int y)
	{
		this->x = x;
		this->y = y;
		cout << "shape" << this->x << "," << this->y << endl;
	}
	void draw()
	{
		cout << "shape draw" << endl;
	}
};

class rect : public shape{
private:
	int w, h;
public:
	void setw(int we)
	{
		w = we;
		cout << "rect w" << w << endl;
	}
	void seth(int he)
	{
		h = he;
		cout << "rest h" << h << endl;
	}
	void draw()
	{
		cout << "rect draw";	
	}
};
int main()
{
	shape *ps = new rect();
	ps->setor(10, 10);
	ps->draw();
	((rect*)ps)->setw(100);
	((rect*)ps)->seth(200);
	((rect*)ps)->draw();

	delete ps;
}