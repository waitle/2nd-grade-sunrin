#include <iostream>

using namespace std;

class t{
public:
	int calpizza(int per, int pi)
	{
		return pi / per;
	}
};

int main()
{
	t T;
	try{

		int pizza, per;
		cout << "input pizza pieace";
		cin >> pizza;
		cout << "input persom";
		cin >> per;
		if (per<= 1)
			throw per;
		cout << "eat " << T.calpizza(per, pizza) << "pieace per persom" << endl;
	}
	catch (int e)
	{
		cout << "first person get all of pizza" << endl << "other person cant eat pizza" << endl << "become early bird" << endl;
	}
}