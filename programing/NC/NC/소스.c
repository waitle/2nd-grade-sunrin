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
int people;                      //인원수
int peoplerank;                  //인원수를 담을 변수(people을 이용할것이기 때문에)
int score[100] = { 0, };          //총합을 담아줄 배열
int scorenum = 0;                //배열을 다룰 수
char *name[100] = { 0, };         // 플레이어들의 이름

struct point {
	int a;
	int b;
};
void input_map();                      // 맵 메뉴들
void input_map2();                     // 맵 구성
void input_explain();                   // 설명
void input_lose();                      // 패배 표시
void input_file1();                    // 병뚜껑게임
void input_file2();                    // 본 게임
void RemoveCursor();                   // 콘솔깜빡임없애기
void input_box(int money, int n);             //보물
void input_gg();                       //가짜 보물
void input_fake(int k);                     //함정
void input_rank();                        //랭크
void input_name();                        // 플레이어들의 이름
void input_yactal(int don, int n);
int life(int n, int m) {              // 병뚜껑의 생명력
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
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), goa);   //좌표설정하기
}
void textcolor(int color_number)

{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);   //텍스트 색깔 변경하기
}
void RemoveCursor(void)

{

	CONSOLE_CURSOR_INFO curInfo;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curInfo);    /*CONSOLE_CURSOR_INFO
																		: 콘솔의 커서 정보를 얻기 위한 구조체, MS에서 정의한것
																		GetConsoleCursorInfo
																		: 콘솔 출력창 정보 반환*/
	curInfo.bVisible = 0;                                             // bVisible 멤버 변경
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curInfo); // 변경값 적용

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
	printf("작성자 >> 신준영     저작권 >> 신준영     쓸수있는 사람들 >> LAYER 7 people");
	gotoxy(x - 17, y - 3);
	printf("a >> 게임START");
	gotoxy(x - 17, y);
	printf("b >> 게임 설명");
	gotoxy(x - 17, y + 3);
	printf("e >> 게임 종료");

	char what;

	while (1) {                           //메뉴
		what = getch();
		switch (what) {
		case 'a':input_file1(); break;
		case 'b':input_explain(); break;
		case 'e':return 0;
		default: textcolor(5);
			gotoxy(x - 17, y + 6);
			printf("목록 중에 고르세요\n");
		}
	}

	return 0;
}

void input_file1(void) {                      // 게임 1실행파일
	int a, b, swing, end = 0, go, random, next;
	int i;
	char bul[300];
	system("cls");
	textcolor(10);
	printf("== >> 순서 정하기용 병뚜껑 날리기 <<==\n\n");
	next = getch();
	printf("룰 설명\n");
	printf("1. 먼저 인원수, 병뚜껑이 날라가게 될 범위를 지정해준다(랜덤)\n\n");
	next = getch();
	printf("2. 병뚜껑을 돌아가면서 친다.(1이상 20이하)\n\n");
	next = getch();
	printf("3. 병뚜껑의 거리가 랜덤으로 정해진 범위를 넘으면 게임이 끝난다.(단! 병뚜껑을 때린 거리는 계속 더해진다)\n\n");
	next = getch();
	printf("다음으로 넘어가려면 아무거나 입력하세요\n");
	go = getch();
	system("cls");
	textcolor(14);
	printf("=====>>옵션 설정하기<<=====\n");
	next = getch();
	printf("인원 수는 몇명입니까?? >> ");
	scanf("%d", &people);
	peoplerank = people;
	printf("\n");
	printf("날라갈 병뚜껑에 거리의 최소 범위를 정해주세요  **최솟값** >>> [     ]\b\b\b\b\b\b");
	scanf("%d", &b);
	printf("\n");
	printf("날라갈 병뚜껑에 거리의 최대 범위를 정해주세요  **최댓값** >> >[     ]\b\b\b\b\b\b");
	scanf("%d", &a);
	printf("\n");
	printf(">>모든 옵션이 설정되었습니다<<\n");
	Sleep(1000);
	system("cls");
	textcolor(5);
	printf("게임은 시작되었습니다\n");
	printf("병뚜껑은 20데미지 이하로 떄리셔야 합니다!!!!!!!!!!!(어길시에는.......)\n\n\n");
	textcolor(10);
	while (1) {
		for (i = 1; i <= people; i++) {
			printf(" >> 합계 : %d\n", end);
			printf("%d번 사람의 차례입니다 >> 때려 주세요 : {     }\b\b\b\b\b\b", i);
			scanf("%d", &swing);
			if (swing > 20 || swing < 1) {
				system("cls");
				textcolor(12);
				printf("약속을 어기셨습니다\n 벌칙으로 팀원들이 원하는 것을 하나 수행하십시오\n");
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
				printf(" 수고하셨어요 순서 게임은 끝났습니다. 랜덤값은 (%d) 였습니다.", random);
				gotoxy(23, 16);
				printf("사실 순서는 게임을 끝낸 사람이 결정합니다(5초뒤 본 게임으로 이동합니다.)\n\n");
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
	printf("이 게임의 룰에 대해 설명합니다!!\n\n");
	next1 = getch();
	textcolor(10);
	printf("1. 첫번째 화면에 게임의 룰이 나온다\n\n");
	next1 = getch();
	textcolor(11);
	printf("2. 게임에 들어가면(a) 옵션설정창이 나오는데 그곳에서 옵션을 설정한다 \n\n");
	next1 = getch();
	textcolor(12);
	printf("3. 랜덤으로된 범위(혹은 사용자 지정)를 추측하면서 순서를 정한다\n\n");
	next1 = getch();
	textcolor(13);
	printf("4. 순서를 정한 다음 본 게임을 재밌게 즐긴다!!\n\n");
	next1 = getch();
	textcolor(14);
	printf("***a >> 게임들어가기***, ***b >> 메인화면");
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
	printf("이 게임은 보물찾기 게임입니다\n");
	cha = getch();
	gotoxy(15, 13);
	printf("돌아다니며 보물을 찾으면 숫자를 기억하십시오\n");
	cha = getch();
	gotoxy(15, 14);
	printf("**참고로 보물이 아닌 것도 있습니다\n");
	cha = getch();
	gotoxy(15, 15);
	printf("***!!아 맞다 그리고\n");
	cha = getch();
	gotoxy(15, 16);
	printf("****함정이 몇개있는데 빠지면 바로게임은 끝납니다.\n");
	cha = getch();
	gotoxy(15, 17);
	printf("아까 정한 순서대로 함정에 빠지지 않고 더많이 보물을 찾으면 됩니다\n");
	cha = getch();
	gotoxy(15, 18);
	printf("자 이제 게임을 시작합니다\n");
	cha = getch();
	system("cls");
	textcolor(10);
	gotoxy(x, y);
	printf("■");
	gotoxy(x, y + 1);
	printf("↑아...안뇽!");
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
		printf("■");
		if (pirate % 15 == 0) {
			for (int i = 1; i < life(80, 1); i++) {
				gotoxy(i, y);
				printf("▶");
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
	printf("보물을 찾았다! 번호는 >> %d\n", money);
	score[n] += money;
	Sleep(2000);
}
void input_yactal(int don, int n) {
	gotoxy(40, 15);
	printf("해적을 만났따!!!!! 약탈당한 금액 >> %d\n", don);
	score[n] -= don;
	Sleep(2000);
}
void input_gg() {
	gotoxy(40, 15);
	printf("음 이건 쓸만한 보물이 아닌것 같다");
	gotoxy(40, 16);
	printf("그래도 한번 파봐야지♪(딜레이 5초)");
	Sleep(5000);
}
void input_fake(int k) {
	int n, i = 0, f = 1;
	textcolor(6);
	for (n = 10; n <= 17; n++) {
		Beep(_D, 100);
		gotoxy(30, n);
		printf("당신은 함정에 빠지셨습니다!!\n");
		Sleep(300);
	}
	textcolor(9);
	gotoxy(30, 23);
	printf("당신의 합 >> %d\n", score[k]);
	if (score[k] >= 100) {
		textcolor(5);
		gotoxy(30, 24);
		printf(">>잘하셨습니다<<\n");
	}
	else {
		gotoxy(30, 24);
		printf(">>기준 미달입니다<<\n");
	}
	people -= 1;
	i += 1;
	scorenum += 1;
	if (people) {
		gotoxy(21, 26);
		printf("5초뒤에 재 시작됩니다");
		gotoxy(21, 27);
		printf("다음은 >>%s<< 플레이어 차례입니다", &name[f]);
		f += 1;
		Sleep(5000);
		system("cls");
		input_file2();
	}
	else {
		gotoxy(18, 25);
		printf("함께한 사람들과 점수를 비교해보세요 인원 수만큼 진행했기때문에\n\t\t 5초뒤에 종료됩니다");
		Sleep(5000);
		system("cls");
		input_rank();
	}
}
void input_rank() {
	int ha = 0;
	printf("끝 (!!7초 뒤에 종료!!)\n");
	printf("지금까지의 총합을 정리 해드리겠습니다\n");
	for (int j = 0; j < peoplerank; j++) {
		textcolor(12);
		gotoxy(25, 10 + j + ha);
		printf("-------------------------------------\n");
		gotoxy(25, 11 + j + ha);
		printf("|");
		gotoxy(30, 11 + j + ha);
		printf("%s 플레이어 >> %d |\n", &name[j], score[j]);
		Sleep(1000);
		ha += 1;
	}
	Sleep(7000);
}
void input_name() {
	int y, j;
	gotoxy(25, 10);
	printf("플레이어들의 순서를 이름을 써주세요!\n");
	for (y = 0; y < peoplerank; y++) {
		gotoxy(25, 12 + y);
		printf("%d번 플레이어의 이름 >> ", y + 1);
		gotoxy(48, 12 + y);
		scanf("%s", &name[y]);
	}
	gotoxy(25, 13 + peoplerank);
	printf("자 이제 곧 게임에 들어갑니다!!");
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