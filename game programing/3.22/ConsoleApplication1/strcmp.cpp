#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char str1[20];
	char str2[20];

	cout << "str1";
	cin >> str1;
	cout << "str2";
	cin >> str2;

	int result = strcmp(str1, str2);
	if (result == 0)
		cout << "same array" << endl;
	else if (result < 0)
		cout << "str1 is located in front then str2 as dictionaly";
	else
		cout << "str2 is located in front then str1 as dictionaly";

	return 0;

}