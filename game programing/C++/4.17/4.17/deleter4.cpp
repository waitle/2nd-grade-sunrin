#include<iostream>
#include<string>
using namespace std;

class shape{
	int x, y;
public:
	shape()
	{
		cout << "creator of shade " << endl;
	}
	~shape()
	{
		cout << "deletor of shade " << endl;
	}
};
class rextangle :public shape{
	int width, height;
public:
	rextangle(){
		cout << "creator of tangle" << endl;
	}
	~rextangle()
	{
		cout << "deletor of tangle" << endl;
	}
};
int main()
{
	rextangle c;
	return 0;
}