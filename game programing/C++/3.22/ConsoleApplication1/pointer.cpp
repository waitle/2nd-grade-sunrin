#include <iostream>

using namespace std;

void display(const int *x, const int *y);
void move(int *x, int *y);

int main()
{
	int x = 10;
	int y = 20;

	display(&x, &y);
	move(&x, &y);
	display(&x, &y);
}

void display(const int *x, const int *y)
{
	cout << "location " << *x << *y << endl;
}
void move(int *x, int *y)
{
	*x += 1;
	*y += 1;
}
