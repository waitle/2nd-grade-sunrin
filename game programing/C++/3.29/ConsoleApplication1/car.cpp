#include <iostream>
#include <string>
using namespace std;

class car{
public:
	int speed;
	int gear;
	string color;
	void speedUp()
	{
		speed += 10;
	}
	void speeddown()
	{
		speed -= 10;
	}
	void show()
	{
		cout << "000000000000000000000" << endl;
		cout << "speed" << speed << endl;
		cout << "grear" << gear << endl;
		cout << "color" << color << endl;
		cout << "000000000000000000000" << endl;
	}
};


int main()
{
	car mycar;
	mycar.speed = 100;
	mycar.gear = 3;
	mycar.color = "red";
	mycar.speedUp();
	car *youcar=new car;
	youcar->speed = 100;
	youcar->gear = 3;
	youcar->color = "red";
	youcar->speedUp();
	cout << mycar.speed << endl;
	cout << youcar->speed << endl;

}