#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char str1[20];
	char str2[20];

	cout << "str1";
	cin >> str1;
	cout << "str2";
	cin >> str2;

	strcat(str1, str2);
	cout << "str1" << str1 << endl;
}