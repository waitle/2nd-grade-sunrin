#include <iostream>
#include <string>
using namespace std;
class base{
public:
	int basemem;
	string basemam2;
	void show()
	{
		cout << "base func" << endl;
	}

};

class der :public base{
public:
	int dermam;
	string dermam;
	void dshow()
	{
		cout << "ser fuck" << endl;
	}
};
int main()
{
	base *b = new der();

	der *d;
	d = (der*)b;
	d->show();
	d->dshow();
}