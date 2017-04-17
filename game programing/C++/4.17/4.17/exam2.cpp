#include<iostream>
#include<string>
using namespace std;
class em{
	int rrn;
protected:
	int sal;
public:
	string name;
	void setsal(int insal)
	{
		int getsal();
	}
};
void em::setsal(int insal)
{
	this->sal = insal;
}
int em::getsal()
{
	return sal;
}