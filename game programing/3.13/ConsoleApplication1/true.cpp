#include <iostream>
using namespace std;
int main()
{
	int num = 10;
	int i=0;
	cout << "ture: " << true << endl;
	cout << "false: " << false << endl;

	while (true)
	{
		cout << i++ << ' ';
		if (i > num)
			break;

	}
	cout << endl;
	cout << "sizeof 1:" << sizeof(1) << endl;
	cout << "sizeof 0:" << sizeof(0) << endl;
	cout << "sizeof t:" << sizeof(true) << endl;
	cout << "sizeof f:" << sizeof(false) << endl;
	return 0;
}