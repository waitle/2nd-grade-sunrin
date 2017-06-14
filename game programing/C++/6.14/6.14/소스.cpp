#include <iostream>

using namespace std;

int stringint(char s[])
{
	int sum = 0, len = strlen(s);
	for (int i = 0; i < len; i++)
	{
		if (s[i] >= '0'&&s[i] <= '9')
			sum = sum * 10 + s[i]-'0';
		else
			throw s;
	}
	return sum;
}

int main()
{
	int n;
	try{
		n = stringint("123");
		cout << "\"123\"is integer converted to " << n << endl;
		n = stringint("1A3");
		cout << "\"1A3\" is integer converted to " << n << endl;
	}
	catch (char * a){
		cout << a << "soemthing happend" << endl;
	}
}