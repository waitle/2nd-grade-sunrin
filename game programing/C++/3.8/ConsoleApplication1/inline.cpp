#include<iostream>
//#define NEMO(x) ((x)*(x))
inline int NEMO(int x)
{
	return x*x;
}
int main()
{
	std::cout << NEMO(5) << std::endl;
	std::cout << NEMO(12) << std::endl;
	return 0;
}