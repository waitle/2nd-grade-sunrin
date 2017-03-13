#include <iostream>

using namespace std;
bool IsPositive(int num)
{
	if (num < 0) return false;
	else return true;
}

int main(void)
{
	bool isPos;
	int num;
	cout << "input num";
	cin >> num;
	isPos = IsPositive(num);
	if (isPos)
		cout << "p num" << endl;
	else
		cout << "n num" << endl;
	return 0;
}