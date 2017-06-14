#include <iostream>

using namespace std;

class no{
	int person;
public:
	no(int p){ person = p; }
	int getper(){ return person; }
};

int main()
{
	int pi=12;
	int person = 0;
	int slics = 0;
	try{
		cout << "input person";
		cin >> person;
		if (person <= 0)
			throw no(person);
		slics = pi / person;
		cout << "eat pizza " << slics << "pieace per per" << endl;
	}
	catch (no e)
	{
		cout << "!caution!" << endl << "there is " << e.getper << "people" << endl;
	}
}