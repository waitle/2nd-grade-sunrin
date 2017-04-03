#include <iostream>
#include<string>
using namespace std;

class car{
private:
	int speed;
	int gear;
	string color;
public:
	car();
	car(int s, int g, string C);
};
car::car()
{
	cout << "make default creator" << endl;
	speed = 0;
	gear = 1;
	color = "white";
}
car::car(int s, int g, string C)
{
	cout << "make default creator" << endl;
	speed = s;
	gear = g;
	color = C;
}
int main()
{
	car c1(0, 1, "red");
	return 0;
}