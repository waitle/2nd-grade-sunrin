#include <iostream>

int box(int w, int h, int l)
{
	return l + h + w;
}
int box(int w, int h)
{
	return  h + w;
}
int box(int w)
{
	return w;
}

int main()
{
	std::cout << "333" <<box(3, 3, 3) << std::endl;
	std::cout << "55" << box(5, 5) << std::endl;
	std::cout << "7" << box(7) << std::endl;
	return 0;
}
