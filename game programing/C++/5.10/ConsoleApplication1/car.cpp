#include <iostream>
using namespace std;
class car{
public:
	int getHP(){
		return 100;
	}
};
class sportscar : public car{
public:
	int getHP()
	{
		return 700;
	}
};
int main()
{
	sportscar a;
	cout << "power of sportscar" << a.getHP << endl;
	cout << "power of sportscar" << a.car::getHP << endl;
}