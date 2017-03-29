#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int var;
	int &ref = var;
	var = 10;
	cout << "var" << var << endl;
	cout << "ref" << ref << endl;

	ref = 20;
	cout << "var" << var << endl;
	cout << "ref" << ref << endl;

}