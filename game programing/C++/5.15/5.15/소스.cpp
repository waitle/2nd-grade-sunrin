#include <iostream>

using namespace std;
class passengercar{
public:
	int seats;
		passengercar(){ seats = 4; }

};

class truck{
public:
	int pay;
	truck(){ pay = 10000; }
};
class pick : public passengercar, public truck{
public:
	int tow;
	pick(){ tow = 300000; }
};
int main()
{
	pick m;
	cout << m.seats << m.pay << m.tow << endl;
}