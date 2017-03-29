
#include <iostream>
#include <string>
using namespace std;

class car{
public:
	string name;
	int sal;
	int age;
	int get()
	{
		return sal;
	}
	int getage()
	{
		return age;
	}
	string getname()
	{
		return name;
	}
	
};


int main()
{
	car e;
	e.sal = 300;
	e.age = 26;
	int sa = e.get();
	string s = e.getname();
	int a = e.getage();

}