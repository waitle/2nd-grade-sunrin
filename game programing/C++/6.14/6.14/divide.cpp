#include <iostream>

using namespace std;

class ile{
public:
	ile(){
		cout << "one of input number is under zero";
	}
};
class dbze{
public:
	dbze(){
		cout << "input cant be zero";
	}
};

class my{
	string msg;
public:
	my(){};
};

int main()
{
	int x, y;
	try{
		cout << "input two integer";
		cin >> x >> y;
		if (x < 0 || y < 0)
			throw ile();
		if (y == 0)
			throw dbze();
		cout << (double)x / (double)y;
	}
	catch (ile &e){

	}
	catch (dbze &e)
	{

	}
}