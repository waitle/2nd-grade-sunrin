#include <iostream>

void swap(int *n, int *n2)
{
	int tmp;
	tmp = *n;
	*n = *n2;
	*n2 = tmp;
}
void swap(char *n, char *n2)
{
	char tmp;
	tmp = *n;
	*n = *n2;
	*n2 = tmp;
}void swap(double *n,double *n2)
{
	double tmp;
	tmp = *n;
	*n = *n2;
	*n2 = tmp;
}

int main()
{

	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;

	char ch1 = 'a', ch2 = 'z';
	swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	double d1 = 1.1, d2 = 2.2;
	swap(&d1, &d2);
	std::cout << d1 << ' ' << d2 << std::endl;
}