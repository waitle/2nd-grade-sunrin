#include <iostream>
#include <time.h>

using namespace std;

struct card{
	int shape;
	int number;
	int status;
};

int point = 100;
int bat;
int rand(card input[52])
{
	srand(time(NULL));
	int randf = rand() % 52;
	int randt = rand() % 52;
	card temp = input[randf];
	input[randf] = input[randt];
	input[randt] = temp;
	return 0;
}void print(card temp[52])
{
	srand(time(NULL));
	int randf;
	int randt;
	int randp;
	do{
		randf = rand() % 52;
		randt = rand() % 52;
		randp = rand() % 52;
		if (temp[randt].status = 1 && temp[randf].status == 1 && temp[randp].status==1)
			break;
	}while (1);
	
	temp[randt].status = 0, temp[randf].status = 0, temp[randp].status=0;
	cout << "===============================================" << endl;
	switch (temp[randf].shape)
	{
	case 1:
		cout << "��"<<temp[randf].number;
			break;
	case 2:
		cout << "��" << temp[randf].number;
			break;
	case 3:
		cout << "��" << temp[randf].number;
			break;
	case 4:
		cout << "��" << temp[randf].number;
			break;
	}
	cout << "     ";
	switch (temp[randt].shape)
	{
	case 1:
		cout << "��" << temp[randt].number;
		break;
	case 2:
		cout << "��" << temp[randt].number;
		break;
	case 3:
		cout << "��" << temp[randt].number;
		break;
	case 4:
		cout << "��" << temp[randt].number;
		break;
	}
	cout << "    my money: " << point << "	" << "batting: ";
	cin >> bat;
	if (temp[randt].number == temp[randf].number || temp[randt].number + 1 == temp[randf].number || temp[randt].number - 1 == temp[randf].number)
	{
		cout << "you lost" << bat << endl;
		point -= bat;
	}
	if (temp[randt].number<temp[randp].number && temp[randf].number>temp[randp].number || temp[randt].number > temp[randp].number && temp[randf].number < temp[randp].number)
	{
		switch (temp[randp].shape)
		{
		case 1:
			cout << "��" << temp[randp].number;
			break;
		case 2:
			cout << "��" << temp[randp].number;
			break;
		case 3:
			cout << "��" << temp[randp].number;
			break;
		case 4:
			cout << "��" << temp[randp].number;
			break;
		}
		cout << "you win!" << endl;
		point += bat;
	}
	else
	{
		cout << "you lost" << bat << endl;
		point -= bat;
	}
	if (bat < 0)
	{
		cout << "fuked up";
	}

}
int main()
{
	card dec[52];
	int i;
	for (i = 0; i < 52; i++)
	{
		dec[i].status = 1;
		dec[i].number = (i + 14) % 13;
		dec[i].shape = (i + 5) % 4;
		if (dec[i].shape == 0)
			dec[i].shape = 4;
		if (dec[i].number == 0)
			dec[i].number = 13;
	}
	int count=17;
	while (count)
	{
		print(dec);
		if (bat < 0)
			return 0;
		count--;
	}
	rand(dec);
}