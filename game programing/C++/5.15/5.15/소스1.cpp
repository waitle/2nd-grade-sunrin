#include <iostream>

using namespace std;
class person{
public:
	void print(){
		cout << "print" << endl;
	}
};

class emp : person{
public:
	void print()
	{
		person::print();
		cout << "print emp" << endl;
	}
};
class man : public person, public emp{
public:
	void print()
	{
		emp::print();
		cout << "print man" << endl;
	}
};
int main()
{
	man m;
	m.print();
}