#include <iostream>

#include "car.h"

using namespace std;

int car::getspeed()
{
	return speed;
}
void car::setspeed(int s)
{
	speed = s;
}
void car::hank()
{
	cout << "bang" << endl;
}