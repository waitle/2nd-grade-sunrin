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
	shape(int inx, int iny) :x(inx), y(iny)
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
	rextangle(int x=0, int y=0,int w=0, int h =0){
		cout << "creator of tangle" << endl;
	}
	~rextangle()
	{
		cout << "deletor of tangle" << endl;
	}
};
rextangle::rextangle(int x, int y, int w, int h): shape(x, y){
	width = w;
	height = h;
	cout << "rexctangle creator (x, y, h, w)" << endl;
}
int main()
{
	rextangle c(0, 0, 100, 100);
	return 0;
}