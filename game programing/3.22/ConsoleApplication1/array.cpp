#include <iostream>

using namespace std;

int main()
{
	const int STUDENTS = 5;
	int grade[STUDENTS] = { 10, 20, 30, 40, 50};
	int sum=0;

	int i, average;
	for (i = 0; i < STUDENTS; i++)
	{
		cout << "input your grade";
		cin >> grade[i];
	}
	for (i = 0; i < STUDENTS; i++)
		sum += grade[i];
	average = sum / STUDENTS;
	cout << "aver=" << average << endl;
	return 0;
}