#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

char *make(int len)
{
	char*str = new char[len];
	return str;
}

int main()
{
	char *str = make(20);
	strcpy(str, "im so hapyp");
	cout << str << endl;
	delete[]str;

}