#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<conio.h>
#define randomize srand()((unsigned)time(NULL))
#define _A 1760.000
#define _B 1975.533
#define _C 1046.502
#define _D 1108.731
int people;                      //�ο���
int peoplerank;                  //�ο����� ���� ����(people�� �̿��Ұ��̱� ������)
int score[100] = { 0, };          //������ ����� �迭
int scorenum = 0;                //�迭�� �ٷ� ��
char *name[100] = { 0, };         // �÷��̾���� �̸�

struct point {
	int a;
	int b;
};
void input_map();                      // �� �޴���
void input_map2();                     // �� ����
void input_explain();                   // ����
void input_lose();                      // �й� ǥ��
void input_file1();                    // ���Ѳ�����
void input_file2();                    // �� ����
void RemoveCursor();                   // �ֱܼ����Ӿ��ֱ�
void input_box(int money, int n);             //����
void input_gg();                       //��¥ ����
void input_fake(int k);                     //����
void input_rank();                        //��ũ
void input_name();                        // �÷��̾���� �̸�
void input_yactal(int don, int n);
int life(int n, int m) {              // ���Ѳ��� �����
	int i = 0;
	srand(time(NULL));
	i = rand() % ((n - m) + 1) + m;
	return i;
}
int money(int h, int w) {
	int i, b = 0;
	srand(time(NULL));
	b = rand() % ((h - w) + 1) + w;
	if (b % 2 == 1) {
		return (b - 1);
	}
	else
		return b;
}
void gotoxy(int x, int y) {
	COORD goa = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), goa);   //��ǥ�����ϱ�
}
void textcolor(int color_number)

{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);   //�ؽ�Ʈ ���� �����ϱ�
}
void RemoveCursor(void)

{

	CONSOLE_CURSOR_INFO curInfo;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curInfo);    /*CONSOLE_CURSOR_INFO
																		: �ܼ��� Ŀ�� ������ ��� ���� ����ü, MS���� �����Ѱ�
																		GetConsoleCursorInfo
																		: �ܼ� ���â ���� ��ȯ*/
	curInfo.bVisible = 0;                                             // bVisible ��� ����
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curInfo); // ���氪 ����

}
void input_map() {
	int x = 50;
	int y = 15;
	system("mode con cols=103 lines=30");
	system("cls");
	RemoveCursor();
	textcolor(11);
	input_map2();
	gotoxy(x - 47, y + 13);
	printf("�ۼ��� >> ���ؿ�     ���۱� >> ���ؿ�     �����ִ� ����� >> LAYER 7 people");
	gotoxy(x - 17, y - 3);
	printf("a >> ����START");
	gotoxy(x - 17, y);
	printf("b >> ���� ����");
	gotoxy(x - 17, y + 3);
	printf("e >> ���� ����");

	char what;

	while (1) {                           //�޴�
		what = getch();
		switch (what) {
		case 'a':input_file1(); break;
		case 'b':input_explain(); break;
		case 'e':return 0;
		default: textcolor(5);
			gotoxy(x - 17, y + 6);
			printf("��� �߿� ������\n");
		}
	}

	return 0;
}

void input_file1(void) {                      // ���� 1��������
	int a, b, swing, end = 0, go, random, next;
	int i;
	char bul[300];
	system("cls");
	textcolor(10);
	printf("== >> ���� ���ϱ�� ���Ѳ� ������ <<==\n\n");
	next = getch();
	printf("�� ����\n");
	printf("1. ���� �ο���, ���Ѳ��� ���󰡰� �� ������ �������ش�(����)\n\n");
	next = getch();
	printf("2. ���Ѳ��� ���ư��鼭 ģ��.(1�̻� 20����)\n\n");
	next = getch();
	printf("3. ���Ѳ��� �Ÿ��� �������� ������ ������ ������ ������ ������.(��! ���Ѳ��� ���� �Ÿ��� ��� ��������)\n\n");
	next = getch();
	printf("�������� �Ѿ���� �ƹ��ų� �Է��ϼ���\n");
	go = getch();
	system("cls");
	textcolor(14);
	printf("=====>>�ɼ� �����ϱ�<<=====\n");
	next = getch();
	printf("�ο� ���� ����Դϱ�?? >> ");
	scanf("%d", &people);
	peoplerank = people;
	printf("\n");
	printf("���� ���Ѳ��� �Ÿ��� �ּ� ������ �����ּ���  **�ּڰ�** >>> [     ]\b\b\b\b\b\b");
	scanf("%d", &b);
	printf("\n");
	printf("���� ���Ѳ��� �Ÿ��� �ִ� ������ �����ּ���  **�ִ�** >> >[     ]\b\b\b\b\b\b");
	scanf("%d", &a);
	printf("\n");
	printf(">>��� �ɼ��� �����Ǿ����ϴ�<<\n");
	Sleep(1000);
	system("cls");
	textcolor(5);
	printf("������ ���۵Ǿ����ϴ�\n");
	printf("���Ѳ��� 20������ ���Ϸ� �����ž� �մϴ�!!!!!!!!!!!(���ÿ���.......)\n\n\n");
	textcolor(10);
	while (1) {
		for (i = 1; i <= people; i++) {
			printf(" >> �հ� : %d\n", end);
			printf("%d�� ����� �����Դϴ� >> ���� �ּ��� : {     }\b\b\b\b\b\b", i);
			scanf("%d", &swing);
			if (swing > 20 || swing < 1) {
				system("cls");
				textcolor(12);
				printf("����� ���̽��ϴ�\n ��Ģ���� �������� ���ϴ� ���� �ϳ� �����Ͻʽÿ�\n");
				input_lose();
				Sleep(5000);
				input_map();
			}
			end += swing;
			random = life(a, b);
			if (random <= end) {
				system("cls");
				textcolor(8);
				gotoxy(23, 15);
				printf(" �����ϼ̾�� ���� ������ �������ϴ�. �������� (%d) �����ϴ�.", random);
				gotoxy(23, 16);
				printf("��� ������ ������ ���� ����� �����մϴ�(5�ʵ� �� �������� �̵��մϴ�.)\n\n");
				Sleep(3000);
				system("cls");
				input_name();
			}
		}
	}
}
void input_explain() {
	int how, next1;
	system("cls");
	printf("�� ������ �꿡 ���� �����մϴ�!!\n\n");
	next1 = getch();
	textcolor(10);
	printf("1. ù��° ȭ�鿡 ������ ���� ���´�\n\n");
	next1 = getch();
	textcolor(11);
	printf("2. ���ӿ� ����(a) �ɼǼ���â�� �����µ� �װ����� �ɼ��� �����Ѵ� \n\n");
	next1 = getch();
	textcolor(12);
	printf("3. �������ε� ����(Ȥ�� ����� ����)�� �����ϸ鼭 ������ ���Ѵ�\n\n");
	next1 = getch();
	textcolor(13);
	printf("4. ������ ���� ���� �� ������ ��հ� ����!!\n\n");
	next1 = getch();
	textcolor(14);
	printf("***a >> ���ӵ���***, ***b >> ����ȭ��");
	how = getch();
	switch (how) {
	case 'a': input_file1(); break;
	case 'b': input_map();
	}
}
void input_file2() {
	int pirate = 1;
	int chance = 3;
	int hiden, jungbok = 0;
	int getmoney = life(10, 1);
	int getmoney2 = life(30, 20);
	int getmoney4 = life(50, 40);
	int getmoney6 = life(70, 60);
	int getmoney8 = life(90, 80);
	struct point p[10] = { { .a = money(10, 1),.b = life(5, 1) },{ .a = money(20, 10),.b = life(8, 5) },{ .a = money(28, 20),.b = life(10, 8), },
	{ .a = money(35, 28),.b = life(15, 10) },{ .a = money(45, 35),.b = life(16, 15) },{ .a = money(54, 45),.b = life(19, 16), },
	{ .a = money(60, 54),.b = life(22, 19) },{ .a = money(70, 60),.b = life(26, 22) },{ .a = money(81, 1),.b = life(30, 1) },{ .a = money(80, 10),.b = life(30, 10) } };
	struct point go[3] = { { .a = money(80,1),.b = life(30, 1) },{ .a = money(70,1),.b = life(25, 1) },{ .a = money(60,1),.b = life(20, 1) } };
	int ch, cha;
	int x = 10, y = 10;
	textcolor(11);
	gotoxy(15, 12);
	printf("�� ������ ����ã�� �����Դϴ�\n");
	cha = getch();
	gotoxy(15, 13);
	printf("���ƴٴϸ� ������ ã���� ���ڸ� ����Ͻʽÿ�\n");
	cha = getch();
	gotoxy(15, 14);
	printf("**����� ������ �ƴ� �͵� �ֽ��ϴ�\n");
	cha = getch();
	gotoxy(15, 15);
	printf("***!!�� �´� �׸���\n");
	cha = getch();
	gotoxy(15, 16);
	printf("****������ ��ִµ� ������ �ٷΰ����� �����ϴ�.\n");
	cha = getch();
	gotoxy(15, 17);
	printf("�Ʊ� ���� ������� ������ ������ �ʰ� ������ ������ ã���� �˴ϴ�\n");
	cha = getch();
	gotoxy(15, 18);
	printf("�� ���� ������ �����մϴ�\n");
	cha = getch();
	system("cls");
	textcolor(10);
	gotoxy(x, y);
	printf("��");
	gotoxy(x, y + 1);
	printf("���...�ȴ�!");
	Sleep(1000);
	while (1) {
		if (_kbhit()) {
			input_map2();
			ch = getch();
			pirate++;
			switch (ch) {
			case 'w': Beep(_A, 10); printf(" "); y--;
				break;
			case 's': Beep(_A, 10); printf(" "); y++;
				break;
			case 'a': Beep(_A, 10); printf(" "); x -= 2;
				break;
			case 'd': Beep(_A, 10); printf(" "); x += 2;
				break;
			case '+': for (int i = 0; i <= 9; i++) {
				gotoxy(p[i].a, p[i].b);
				printf("*");
				Sleep(100);
			}
			case 'p': if (chance >= 1) {
				hiden = life(10, 1);
				gotoxy(p[hiden].a, p[hiden].b);
				printf("*");
				Sleep(100);
				chance -= 1;
			}
					  else {
						  gotoxy(20, 15);
						  printf("You no longer have a chance.");
					  }
			}

			if (x < 1) {
				x += 2;
			}
			if (x >= 81) {
				x -= 2;
			}
			if (y <= 0) {
				y++;
			}
			if (y >= 30) {
				y--;
			}
		}
		gotoxy(x, y);
		printf("��");
		if (pirate % 15 == 0) {
			for (int i = 1; i < life(80, 1); i++) {
				gotoxy(i, y);
				printf("��");
				Sleep(50);
				gotoxy(i, 20);
				printf(" ");
				if (i == x) {
					input_yactal(life(30, 1), scorenum);
					break;
				}
			}
		}
		Sleep(10);
		if (x == p[0].a && y == p[0].b) {
			Beep(_B, 100);
			input_box(getmoney, scorenum);
			getmoney = 0;
		}
		if (x == p[1].a && y == p[1].b) {
			Beep(_C, 100);
			input_gg();
		}
		if (x == p[2].a && y == p[2].b) {
			Beep(_B, 100);
			input_box(getmoney2, scorenum);
			getmoney2 = 0;
		}
		if (x == p[3].a && y == p[3].b) {
			Beep(_C, 100);
			input_gg();
		}
		if (x == p[4].a && y == p[4].b) {
			Beep(_B, 100);
			input_box(getmoney4, scorenum);
			getmoney4 = 0;
		}
		if (x == p[5].a && y == p[5].b) {
			Beep(_C, 100);
			input_gg();
		}
		if (x == p[6].a && y == p[6].b) {
			Beep(_B, 100);
			input_box(getmoney6, scorenum);
			getmoney6 = 0;
		}
		if (x == p[7].a && y == p[7].b) {
			Beep(_C, 100);
			input_gg();
		}
		if (x == p[8].a && y == p[8].b) {
			Beep(_B, 100);
			input_box(getmoney8, scorenum);
			getmoney8 = 0;
		}
		if (x == p[9].a && y == p[9].b) {
			Beep(_C, 100);
			input_gg();
		}
		if (x == go[0].a && y == go[0].b) {
			input_fake(scorenum);
		}
		if (x == go[1].a && y == go[1].b) {
			input_fake(scorenum);
		}
		if (x == go[2].a && y == go[2].b) {
			input_fake(scorenum);
		}
		if (x == 78 && y == 29) {
			input_fake(scorenum);
		}
	}
}
int main() {
	input_map();
}
void input_box(int money, int n) {
	gotoxy(40, 15);
	printf("������ ã�Ҵ�! ��ȣ�� >> %d\n", money);
	score[n] += money;
	Sleep(2000);
}
void input_yactal(int don, int n) {
	gotoxy(40, 15);
	printf("������ ������!!!!! ��Ż���� �ݾ� >> %d\n", don);
	score[n] -= don;
	Sleep(2000);
}
void input_gg() {
	gotoxy(40, 15);
	printf("�� �̰� ������ ������ �ƴѰ� ����");
	gotoxy(40, 16);
	printf("�׷��� �ѹ� �ĺ�������(������ 5��)");
	Sleep(5000);
}
void input_fake(int k) {
	int n, i = 0, f = 1;
	textcolor(6);
	for (n = 10; n <= 17; n++) {
		Beep(_D, 100);
		gotoxy(30, n);
		printf("����� ������ �����̽��ϴ�!!\n");
		Sleep(300);
	}
	textcolor(9);
	gotoxy(30, 23);
	printf("����� �� >> %d\n", score[k]);
	if (score[k] >= 100) {
		textcolor(5);
		gotoxy(30, 24);
		printf(">>���ϼ̽��ϴ�<<\n");
	}
	else {
		gotoxy(30, 24);
		printf(">>���� �̴��Դϴ�<<\n");
	}
	people -= 1;
	i += 1;
	scorenum += 1;
	if (people) {
		gotoxy(21, 26);
		printf("5�ʵڿ� �� ���۵˴ϴ�");
		gotoxy(21, 27);
		printf("������ >>%s<< �÷��̾� �����Դϴ�", &name[f]);
		f += 1;
		Sleep(5000);
		system("cls");
		input_file2();
	}
	else {
		gotoxy(18, 25);
		printf("�Բ��� ������ ������ ���غ����� �ο� ����ŭ �����߱⶧����\n\t\t 5�ʵڿ� ����˴ϴ�");
		Sleep(5000);
		system("cls");
		input_rank();
	}
}
void input_rank() {
	int ha = 0;
	printf("�� (!!7�� �ڿ� ����!!)\n");
	printf("���ݱ����� ������ ���� �ص帮�ڽ��ϴ�\n");
	for (int j = 0; j < peoplerank; j++) {
		textcolor(12);
		gotoxy(25, 10 + j + ha);
		printf("-------------------------------------\n");
		gotoxy(25, 11 + j + ha);
		printf("|");
		gotoxy(30, 11 + j + ha);
		printf("%s �÷��̾� >> %d |\n", &name[j], score[j]);
		Sleep(1000);
		ha += 1;
	}
	Sleep(7000);
}
void input_name() {
	int y, j;
	gotoxy(25, 10);
	printf("�÷��̾���� ������ �̸��� ���ּ���!\n");
	for (y = 0; y < peoplerank; y++) {
		gotoxy(25, 12 + y);
		printf("%d�� �÷��̾��� �̸� >> ", y + 1);
		gotoxy(48, 12 + y);
		scanf("%s", &name[y]);
	}
	gotoxy(25, 13 + peoplerank);
	printf("�� ���� �� ���ӿ� ���ϴ�!!");
	Sleep(1000);
	system("cls");
	input_file2();
}
void input_lose() {
	printf("############################  ##  #####  ####  ###  ##  ###################\n");
	printf("################          ##  ##  #####  ####  ###  ##  ###################\n");
	printf("##################  ##  ####  ##  #####  ####  ###  ##  ###################\n");
	printf("##################  ##  ####  ##  #####  ####  ###  ##  ###################\n");
	printf("##################  ##  ####  ##  #####        ###  ##  ###################\n");
	printf("##################  ##  ####      #####  ####  ###      ###################\n");
	printf("##################  ##  ####  ##  #####  ####  ###  ##  ###################\n");
	printf("##################  ##  ####  ##  #####  ####  ###  ##  ###################\n");
	printf("##################  ##  ####  ##  #####  ####  ###  ##  ###################\n");
	printf("################          ##  ##  #####        ###  ##  ###################\n");
	printf("############################  ##  ################  ##  ###################\n");
	printf("############################  ##  ################  ##  ###################\n");
	printf("############################  ##  ################  ##  ###################\n");
}
void input_map2() {
	system("mode con cols=83 lines=32");
	printf("**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**\n");
	printf("l                                                                                 l\n");
	printf("*                                                                                 *\n");
	printf("l                                                                                 l\n");
	printf("*                                                                                 *\n");
	printf("l                                                                                 l\n");
	printf("*                                                                                 *\n");
	printf("l                                                                                 l\n");
	printf("*                                                                                 *\n");
	printf("l                                                                                 l\n");
	printf("*                                                                                 *\n");
	printf("l                                                                                 l\n");
	printf("*                                                                                 *\n");
	printf("l                                                                                 l\n");
	printf("*                                                                                 *\n");
	printf("l                                                                                 l\n");
	printf("*                                                                                 *\n");
	printf("l                                                                                 l\n");
	printf("*                                                                                 *\n");
	printf("l                                                                                 l\n");
	printf("*                                                                                 *\n");
	printf("l                                                                                 l\n");
	printf("*                                                                                 *\n");
	printf("l                                                                                 l\n");
	printf("*                                                                                 *\n");
	printf("l                                                                                 l\n");
	printf("*                                                                                 *\n");
	printf("l                                                                                 l\n");
	printf("*                                                                                 *\n");
	printf("l                                                                                 l\n");
	printf("**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**\n");
}