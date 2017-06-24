#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include <windows.h>
#include<cstdlib>
#include<ctime>
using namespace std;

void gotoxy(int x, int y)
{
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void printbox(int limx, int limy)
{
	int i;
	system("cls");
	gotoxy(0, 1);
	for (i = 0; i < limx; i += 2)
		cout << "■";
	gotoxy(0, limy);
	for (i = 0; i < limx; i += 2)
		cout << "■";
}
int printbar(int y, int limy, int len, int x)
{
	int i;
	if (y>limy - len)//bar가 아래쪽 벽밖을 넘으려 할경우
		return -1;
	else if (y<2)//bar가 위쪽 벽밖을 넘으려 할경우
		return 1;
	else//그리기
	{
		if (y != 2)
		{
			gotoxy(x, y - 1);
			cout << ' ';
		}
		for (i = 1; i <= len; i++)
		{
			gotoxy(x, y++);
			cout << "□";
		}
		if (y != limy)
		{
			gotoxy(x, y);
			cout << ' ';
		}
	}
	return 0;
}
void printscore(int points1, int points2, int points3, int limy, int limx)
{
	gotoxy(limx / 2 - 5, limy + 1);
	cout << "SCORECARD\n";
	cout << "Player 1 =" << points1 << '\n';
	cout << "Player 2 =" << points2 << '\n';
	cout << "Player 3 =" << points3 << '\n';
}
void main()
{
	system("cls");
	int getPointPlayer = 0;
	int limx, limy, points;
	srand((unsigned int)time(NULL));
	cout << "Enter horizontal limit:"; cin >> limx;
	cout << "Enter vertical limit:"; cin >> limy;
	//char command[256] = { '\0', };
	//sprintf(command, "mode con: lines=%d cols=%d", limy, limx);
	//system(command);
	limy = limy - 4;
	cout << "\n\nEnter zpoints required to win:";
	cin >> points;
	cout << "\n\nPlayer 1:\nUse \'a\' and \'z\' to move the bar\n\nPlayer 2:\nUse \'k\' ans \'m\' to move the bar\n\nPlayer 3:\nUse \'v\' ans \'g\' to move the bar";
	getch();
	system("cls");
	int i, chanx, chany, x, y, yl = limy / 2, yr = limy / 2, yi = limy / 2, len = limy / 4, points1 = 0, points2 = 0, points3 = 0, sp = 4;
	if (len % 2 == 0)
		len++;
	printbox(limx, limy);
	printbar(yl, limy, len, 2);
	printbar(yr, limy, len, limx - 1);
	printbar(yi, limy, len, limx / 2);
	printscore(points1, points2, points3, limy, limx);
	cout << "Points required:" << points;
	char in;
	while (points1 != points && points2 != points && points3 != points)
	{
		x = limx / 2 + (points1 - points2);//공의 초기 x 위치
		y = limy / 2 + rand() % (limy / 10);//공의 초기 y 위치
		chany = rand() % 3;//초기 공의 y로 가는 속도 random돌리기
		if (chany == 2)
			chany = -1;
		chanx = rand() % 2;//초기 공의 x로 가는 속도 random돌리기
		if (chanx == 0)
			chanx = -1;
		sp = 0;
		gotoxy(x, y);
		for (i = 3; i >= 1; i--)
		{
			cout << i << '\b';
			Sleep(1000);
		}
		cout << '\a';
		while (1)
		{
			gotoxy(x, y);
			cout << "◎\b";//공 그리기
			if (kbhit())//타자가 눌렸는지 확인
			{
				in = getch();
				if (in == 'z')
					yl = yl + printbar(++yl, limy, len, 2);
				else if (in == 'a')
					yl = yl + printbar(--yl, limy, len, 2);
				else if (in == 'm')
					yr = yr + printbar(++yr, limy, len, limx - 1);
				else if (in == 'k')
					yr = yr + printbar(--yr, limy, len, limx - 1);
				else if (in == 'v')
					yr = yr + printbar(++yi, limy, len, limx / 2);
				else if (in == 'g')
					yr = yr + printbar(--yi, limy, len, limx / 2);
				in = NULL;
				if (sp != 50)
					sp++;
			}
			if (kbhit())
			{
				in = getch();
				if (in == 'z')
					yl = yl + printbar(++yl, limy, len, 2);
				else if (in == 'a')
					yl = yl + printbar(--yl, limy, len, 2);
				else if (in == 'm')
					yr = yr + printbar(++yr, limy, len, limx - 1);
				else if (in == 'k')
					yr = yr + printbar(--yr, limy, len, limx - 1);
				else if (in == 'v')
					yr = yr + printbar(++yi, limy, len, limx / 2);
				else if (in == 'g')
					yr = yr + printbar(--yi, limy, len, limx / 2);
				in = NULL;
			}
			if (kbhit())
			{
				in = getch();
				if (in == 'z')
					yl = yl + printbar(++yl, limy, len, 2);
				else if (in == 'a')
					yl = yl + printbar(--yl, limy, len, 2);
				else if (in == 'm')
					yr = yr + printbar(++yr, limy, len, limx - 1);
				else if (in == 'k')
					yr = yr + printbar(--yr, limy, len, limx - 1);
				else if (in == 'v')
					yr = yr + printbar(++yi, limy, len, limx / 2);
				else if (in == 'g')
					yr = yr + printbar(--yi, limy, len, limx / 2);
				in = NULL;
			}
			if (x == 4)//1p쪽
			{
				chanx = 1;
				if (y >= yl && y < (yl + len / 2)) {//위쪽 부근에 부딫힐 경우
					getPointPlayer = 1;
					chany = -1;
				}
				else if (y >(yl + len / 2) && y <= (yl + len)) {//아래쪽 부근에 부딫힐 경우
					getPointPlayer = 1;
					chany = 1;
				}
				else if (y == yl + len / 2) {//가운데에 부딫힐 경우
					getPointPlayer = 1;
					chany = 0;
				}
				else//맞추지 못했을 경우
				{
					break;
				}
			}
			else if (x == limx - 3)//2p쪽
			{
				chanx = -1;
				if (y >= yr && y < (yr + len / 2)) {
					getPointPlayer = 2;
					chany = 1;
				}
				else if (y >(yr + len / 2) && y <= (yr + len)) {
					getPointPlayer = 2;
					chany = -1;
				}
				else if (y == yr + len / 2) {
					getPointPlayer = 2;
					chany = 0;
				}
				else
				{
					break;
				}
			}
			else if (x == limx / 2)//3p쪽
			{
				if (chanx == 1) {
					if (y >= yi && y < (yi + len / 2)) {
						getPointPlayer = 3;
						chany = 1;
						chanx = -1;
					}
					else if (y >(yi + len / 2) && y <= (yi + len)) {
						getPointPlayer = 3;
						chany = -1;
						chanx = -1;
					}
					else if (y == yi + len / 2) {
						getPointPlayer = 3;
						chany = 0;
						chanx = -1;
					}
				}
				else if (chanx == -1) {
					if (y >= yi && y < (yi + len / 2)) {
						getPointPlayer = 3;
						chany = 1;
						chanx = 1;
					}
					else if (y >(yi + len / 2) && y <= (yi + len)) {
						getPointPlayer = 3;
						chany = -1;
						chanx = 1;
					}
					else if (y == yi + len / 2) {
						getPointPlayer = 3;
						chany = 0;
						chanx = 1;
					}
				}
			}
			if (y == 2 || y == limy - 1)//위 아래 벽에 부딫칠 경우
			{
				chany = -chany;
			}
			Sleep(100 - sp);
			gotoxy(x, y);
			cout << ' ';
			x = x + chanx;
			y = y + chany;
		}
		switch (getPointPlayer) {
		case 1:points1++;
			break;

		case 2:points2++;
			break;

		case 3:points3++;
			break;
		}
		printscore(points1, points2, points3, limy, limx);
		Sleep(2000);
		getch();
		gotoxy(x, y);
		cout << ' ';
	}
	gotoxy((limx / 2) - 5, (limy + 4) / 2);
	if (points1 == points)
		cout << "Player 1 wins";
	else if (points2 == points)
		cout << "Player 2 wins";
	else
		cout << "Player 3 wins";
	Sleep(1000);
	getch();
}