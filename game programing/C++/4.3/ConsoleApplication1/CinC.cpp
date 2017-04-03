#include <iostream>
#include<string>
using namespace std;

class car{
private:
	int speed;
	int gear;
	string color;
public:
	car(string c);
	car(int s, int g, string C);
	void print();
};

car::car(string c)
{
	cout << "call creator with one input" << endl;
	new(this)car(0, 0, c);
}
car::car(int s, int g, string C)
{
	cout << "call creator with three input" << endl;
	speed = s;
	gear = g;
	color = C;
}
void car::print()
{
	 cout<<"============="<<endl;
	 cout<<"speed"<<speed<<endl;
	 cout<<"gear"<<gear<<endl;
	 cout<<"color"<<color<<endl;
	 cout<<"============="<<endl;
}
int main()
{
	car c1(0, 1, "red");
	return 0;
}