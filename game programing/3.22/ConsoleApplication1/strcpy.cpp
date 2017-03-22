#include <iostream>
#include<cstring>
using namespace std;

int main()
{
	char str1[20];
	char str2[20];
	char str3[20];

	cout << "str1 enter";
	cin >> str1;
	
	strcpy(str2, str1);
	strcpy(str3, "fuck this shit");

	cout << "str2 " << str2 << endl;
	cout << "str3 " << str3 << endl;


}