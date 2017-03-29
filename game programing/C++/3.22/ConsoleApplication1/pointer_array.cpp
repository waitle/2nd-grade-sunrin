#include <iostream>

using namespace std;

int main()
{
	const int STUDENTS = 5;
	int grade[STUDENTS] = { 10, 20, 30, 40, 50 };

	int *i;
	int *pend;
	for (i = grade,pend = grade+STUDENTS ;i!= pend; i++)
	{
		cout << *i << " ";
	}
}