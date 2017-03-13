#include <iostream>
#include<string>

using namespace std;
//int main()
//{
//	string in;
//	int count;
//	cout << "input sting ";
//	cin >> in;
//
//}

int main()
{
	char input[100];
	int i=0, count=0;
	scanf("%s", input);
	while (input[i] == '\n')
	{
		if (input[i] == 's')
			count++;
		i++;
	}
	printf("%d", count);
}