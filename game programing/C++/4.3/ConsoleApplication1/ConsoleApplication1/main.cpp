#include <iostream>
#include "car.h"
using namespace std;
int main()
{
	car mycar;
	mycar.setspeed(80);
	mycar.hank();
	cout << "now speed " << mycar.getspeed() << endl;
	return 0;
}