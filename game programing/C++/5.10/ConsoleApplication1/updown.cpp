#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	srand((unsigned)time(NULL));
	int per = rand() % 1000 + 1;
	int count=0, input;
	for (int i = 0; i < 10; i++)
	{
		cout << "input " << count+1 << "th " << "num" << endl;
		cin >> input;
		if (input > per)
			cout << "down" << endl;
		else if (input < per)
			cout << "up" << endl;
		else
			cout << "correct" << endl;
		count++;
	}
	cout << "fail" << endl;	
}