#include <stdio.h>
#include<stdlib.h>
#include <locale.h>

char ayaEN[14] = { 'k', 'i', 'j', 'u', 'h', 'y', 'n', 'b', 'm', 'l', 'o', 'p', 'O', 'P' };

char *chf = NULL;//���� 1B
wchar_t *chm = NULL;//�ѱ� 2B
int *chl = NULL;//�ѱ� �����ڵ�2B+


int trans(int i, int j, int ir, int cnt)
{
	int dev;
	ir *= 2;
	for (j = 0; cnt < ir; j++)
	{
		dev = 0;
		chm[cnt] = 65444;
		if (chf[j] == 'h'&&chf[j + 1] == 'k')//��
		{
			chm[cnt + 1] = 65480;
			j += 1, ir -= 2;
		}
		else if (chf[j] == 'h'&&chf[j + 1] == 'o')//��
		{
			chm[cnt + 1] = 65481;
			j += 1, ir -= 2;
		}
		else if (chf[j] == 'h'&&chf[j + 1] == 'l')//��
		{
			chm[cnt + 1] = 65482;
			j += 1, ir -= 2;
		}
		else if (chf[j] == 'n'&&chf[j + 1] == 'j')//��
		{
			chm[cnt + 1] = 65485;
			j += 1, ir -= 2;
		}
		else if (chf[j] == 'n'&&chf[j + 1] == 'p')//��
		{
			chm[cnt + 1] = 65486;
			j += 1, ir -= 2;
		}
		else if (chf[j] == 'n'&&chf[j + 1] == 'l')//��
		{
			chm[cnt + 1] = 65487;
			j += 1, ir -= 2;
		}
		else if (chf[j] == 'm'&&chf[j + 1] == 'l')//��
		{
			chm[cnt + 1] = 65490;
			j += 1, ir -= 2;
		}
		else if (chf[j] == 'r'&&chf[j + 1] == 't')//��
		{
			for (i = 0; i < 14; i++)
			{
				if (ayaEN[i] == chf[j + 2])
					dev += 1;
				else
					dev -= 1;
			}
			if (dev == -14)//���ħ�϶�
			{
				chm[cnt + 1] = 65443;
				j += 1, ir -= 2;
			}
			else//������ �ʼ��� �����϶�
				chm[cnt + 1] = 65441;
		}
		else if (chf[j] == 's'&&chf[j + 1] == 'w')//��
		{
			for (i = 0; i < 14; i++)
			{
				if (ayaEN[i] == chf[j + 2])
					dev += 1;
				else
					dev -= 1;
			}
			if (dev == -14)//���ħ�϶�
			{
				chm[cnt + 1] = 65445;
				j += 1, ir -= 2;
			}
			else//������ �ʼ��� �����϶�
				chm[cnt + 1] = 65444;
		}
		else if (chf[j] == 's'&&chf[j + 1] == 'g')//��
		{
			for (i = 0; i < 14; i++)
			{
				if (ayaEN[i] == chf[j + 2])
					dev += 1;
				else
					dev -= 1;
			}
			if (dev == -14)//���ħ�϶�
			{
				chm[cnt + 1] = 65446;
				j += 1, ir -= 2;
			}
			else//������ �ʼ��� �����϶�
				chm[cnt + 1] = 65444;
		}
		else if (chf[j] == 'f'&&chf[j + 1] == 'r')//��
		{
			for (i = 0; i < 14; i++)
			{
				if (ayaEN[i] == chf[j + 2])
					dev += 1;
				else
					dev -= 1;
			}
			if (dev == -14)//���ħ�϶�
			{
				chm[cnt + 1] = 65450;
				j += 1, ir -= 2;
			}
			else//������ �ʼ��� �����϶�
				chm[cnt + 1] = 65449;
		}
		else if (chf[j] == 'f'&&chf[j + 1] == 'a')//��
		{
			for (i = 0; i < 14; i++)
			{
				if (ayaEN[i] == chf[j + 2])
					dev += 1;
				else
					dev -= 1;
			}
			if (dev == -14)//���ħ�϶�
			{
				chm[cnt + 1] = 65451;
				j += 1, ir -= 2;
			}
			else//������ �ʼ��� �����϶�
				chm[cnt + 1] = 65449;
		}
		else if (chf[j] == 'f'&&chf[j + 1] == 'q')//��
		{
			for (i = 0; i < 14; i++)
			{
				if (ayaEN[i] == chf[j + 2])
					dev += 1;
				else
					dev -= 1;
			}
			if (dev == -14)//���ħ�϶�
			{
				chm[cnt + 1] = 65452;
				j += 1, ir -= 2;
			}
			else//������ �ʼ��� �����϶�
				chm[cnt + 1] = 65449;
		}
		else if (chf[j] == 'f'&&chf[j + 1] == 't')//��
		{
			for (i = 0; i < 14; i++)
			{
				if (ayaEN[i] == chf[j + 2])
					dev += 1;
				else
					dev -= 1;
			}
			if (dev == -14)//���ħ�϶�
			{
				chm[cnt + 1] = 65453;
				j += 1, ir -= 2;
			}
			else//������ �ʼ��� �����϶�
				chm[cnt + 1] = 65449;
		}
		else if (chf[j] == 'f'&&chf[j + 1] == 'r')//��
		{
			for (i = 0; i < 14; i++)
			{
				if (ayaEN[i] == chf[j + 2])
					dev += 1;
				else
					dev -= 1;
			}
			if (dev == -14)//���ħ�϶�
			{
				chm[cnt + 1] = 65454;
				j += 1, ir -= 2;
			}
			else//������ �ʼ��� �����϶�
				chm[cnt + 1] = 65449;
		}
		else if (chf[j] == 'f'&&chf[j + 1] == 'v')//��
		{
			for (i = 0; i < 14; i++)
			{
				if (ayaEN[i] == chf[j + 2])
					dev += 1;
				else
					dev -= 1;
			}
			if (dev == -14)//���ħ�϶�
			{
				chm[cnt + 1] = 65455;
				j += 1, ir -= 2;
			}
			else//������ �ʼ��� �����϶�
				chm[cnt + 1] = 65449;
		}
		else if (chf[j] == 'f'&&chf[j + 1] == 'g')//��
		{
			for (i = 0; i < 14; i++)
			{
				if (ayaEN[i] == chf[j + 2])
					dev += 1;
				else
					dev -= 1;
			}
			if (dev == -14)//���ħ�϶�
			{
				chm[cnt + 1] = 65456;
				j += 1, ir -= 2;
			}
			else//������ �ʼ��� �����϶�
				chm[cnt + 1] = 65449;
		}
		else if (chf[j] == 'q'&&chf[j + 1] == 't')//��
		{
			for (i = 0; i < 14; i++)
			{
				if (ayaEN[i] == chf[j + 2])
					dev += 1;
				else
					dev -= 1;
			}
			if (dev == -14)//���ħ�϶�
			{
				chm[cnt + 1] = 65460;
				j += 1, ir -= 2;
			}
			else//������ �ʼ��� �����϶�
				chm[cnt + 1] = 65458;
		}
		else if (chf[j] == 'a' || chf[j] == 'A')//a~z
			chm[cnt + 1] = 65457;
		else if (chf[j] == 'b' || chf[j] == 'B')
			chm[cnt + 1] = 65488;
		else if (chf[j] == 'c' || chf[j] == 'C')
			chm[cnt + 1] = 65466;
		else if (chf[j] == 'd' || chf[j] == 'D')
			chm[cnt + 1] = 65463;
		else if (chf[j] == 'e')
			chm[cnt + 1] = 65447;
		else if (chf[j] == 'f' || chf[j] == 'F')
			chm[cnt + 1] = 65449;
		else if (chf[j] == 'g' || chf[j] == 'G')
			chm[cnt + 1] = 65470;
		else if (chf[j] == 'h' || chf[j] == 'H')
			chm[cnt + 1] = 65479;
		else if (chf[j] == 'i' || chf[j] == 'I')
			chm[cnt + 1] = 65473;
		else if (chf[j] == 'j' || chf[j] == 'J')
			chm[cnt + 1] = 65475;
		else if (chf[j] == 'k' || chf[j] == 'K')
			chm[cnt + 1] = 65471;
		else if (chf[j] == 'l' || chf[j] == 'L')
			chm[cnt + 1] = 65491;
		else if (chf[j] == 'm' || chf[j] == 'M')
			chm[cnt + 1] = 65489;
		else if (chf[j] == 'n' || chf[j] == 'N')
			chm[cnt + 1] = 65484;
		else if (chf[j] == 'o')
			chm[cnt + 1] = 65472;
		else if (chf[j] == 'p')
			chm[cnt + 1] = 65476;
		else if (chf[j] == 'q')
			chm[cnt + 1] = 65458;
		else if (chf[j] == 'r')
			chm[cnt + 1] = 65441;
		else if (chf[j] == 's' || chf[j] == 'S')
			chm[cnt + 1] = 65444;
		else if (chf[j] == 't')
			chm[cnt + 1] = 65461;
		else if (chf[j] == 'u' || chf[j] == 'U')
			chm[cnt + 1] = 65477;
		else if (chf[j] == 'v' || chf[j] == 'V')
			chm[cnt + 1] = 65469;
		else if (chf[j] == 'w')
			chm[cnt + 1] = 65464;
		else if (chf[j] == 'x' || chf[j] == 'X')
			chm[cnt + 1] = 65468;
		else if (chf[j] == 'y' || chf[j] == 'Y')
			chm[cnt + 1] = 65483;
		else if (chf[j] == 'z' || chf[j] == 'Z')
			chm[cnt + 1] = 65467;
		else if (chf[j] == 'Q')
			chm[cnt + 1] = 65459;
		else if (chf[j] == 'W')
			chm[cnt + 1] = 65465;
		else if (chf[j] == 'E')
			chm[cnt + 1] = 65448;
		else if (chf[j] == 'R')
			chm[cnt + 1] = 65442;
		else if (chf[j] == 'T')
			chm[cnt + 1] = 65462;
		else if (chf[j] == 'O')
			chm[cnt + 1] = 65474;
		else if (chf[j] == 'P')
			chm[cnt + 1] = 65478;
		else//������ ������ ���� �״�� ����
		{
			chm[cnt] = chf[j];
			cnt -= 1, ir -= 1;
		}
		cnt += 2;
	}
	return ir;
}

int main(void)
{
	char tmp;
	int i = 0, j = 0, ir, cnt = 0, num;
	setlocale(LC_ALL, "Korean");
	printf("input wrong string : ");

	while ((tmp = getchar()) != '\n')//���ͱ��� ���ڸ� �Է�
	{
		chf = (char*)realloc(chf, i + 1);//���������� �迭�� ũ�⸦ �ø�
		chf[i] = tmp;//�迭�� �ԷµȰ� �Է�
		i++;
	}
	if (i)
		chf[i] = '\0';//Ȯ��� �迭�� �������� �˷���
	chm = (wchar_t*)calloc(i * 2, sizeof(wchar_t));
	chl = (int*)calloc(i, sizeof(int));

	ir = i;
	num = trans(i, j, ir, cnt), cnt = 0;
	printf("��, ���� :\n");
	for (j = 0; j < num; j += 2)//��, ������¹�
	{
		if (cnt == 6)
		{
			printf("\n");
			cnt = 0;
		}
		if (chm[j] < 128)
		{
			printf("��%c ��", chm[j]);
			j--;
		}
		else
			printf("��%c%c��", chm[j], chm[j + 1]);
		cnt += 1;
	}//���������

	printf("\n���� :\n");
	cnt = 0;
	for (i = 0; i < num; i += 2)//����
	{
		/*����
		1.�ʼ��ߺ�
		2.�ʼ�
		3.����
		4.�߼�
		*/
		if (i >= 2)
		{
			if (chm[i + 1] == 65441)//��
			{

				if (chm[i - 1] > 65470 && chm[i - 1] <= 65491)
				{
					if (chm[i + 3] > 65470 && chm[i + 3] <= 65491)//�ʼ��� ���
					{
						chl[cnt] += 44032, cnt += 1;
						wprintf(L"%c", chl[cnt - 1]);
						chl[cnt] = 0;
					}
					else//������ ���
						chl[cnt] += 1;
				}
				else if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 0;
				}
				else
				{
					chl[cnt] += 44032, cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 0;
				}
			}
			else if (chm[i + 1] == 65442)//��
			{
				if (chm[i - 1] > 65470 && chm[i - 1] <= 65491)
				{
					if (chm[i + 3] > 65470 && chm[i + 3] <= 65491)//�ʼ��� ���
					{
						chl[cnt] += 44032, cnt += 1;
						wprintf(L"%c", chl[cnt - 1]);
						chl[cnt] = 588;
					}
					else//������ ���
						chl[cnt] += 2;
				}
				else if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 1;
				}
				else
				{
					chl[cnt] += 44032, cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588;
				}
			}
			else if (chm[i] == 65444 && chm[i + 1] == 65444)//��
			{
				if (chm[i - 1] > 65470 && chm[i - 1] <= 65491)
				{
					if (chm[i + 3] > 65470 && chm[i + 3] <= 65491)//�ʼ��� ���
					{
						chl[cnt] += 44032, cnt += 1;
						wprintf(L"%c", chl[cnt - 1]);
						chl[cnt] = 588 * 2;
					}
					else//������ ���
						chl[cnt] += 4;
				}
				else if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 2;
				}
				else
				{
					chl[cnt] += 44032, cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 2;
				}
			}
			else if (chm[i + 1] == 65447)//��
			{
				if (chm[i - 1] > 65470 && chm[i - 1] <= 65491)
				{
					if (chm[i + 3] > 65470 && chm[i + 3] <= 65491)//�ʼ��� ���
					{
						chl[cnt] += 44032, cnt += 1;
						wprintf(L"%c", chl[cnt - 1]);
						chl[cnt] = 588 * 3;
					}
					else//������ ���
						chl[cnt] += 7;
				}
				else if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 3;
				}
				else
				{
					chl[cnt] += 44032, cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 3;
				}
			}
			else if (chm[i + 1] == 65449)//��
			{
				if (chm[i - 1] > 65470 && chm[i - 1] <= 65491)
				{
					if (chm[i + 3] > 65470 && chm[i + 3] <= 65491)//�ʼ��� ���
					{
						chl[cnt] += 44032, cnt += 1;
						wprintf(L"%c", chl[cnt - 1]);
						chl[cnt] = 588 * 5;
					}
					else//������ ���
						chl[cnt] += 8;
				}
				else if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 5;
				}
				else
				{
					chl[cnt] += 44032, cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 5;
				}
			}
			else if (chm[i + 1] == 65457)//��
			{
				if (chm[i - 1] > 65470 && chm[i - 1] <= 65491)
				{
					if (chm[i + 3] > 65470 && chm[i + 3] <= 65491)//�ʼ��� ���
					{
						chl[cnt] += 44032, cnt += 1;
						wprintf(L"%c", chl[cnt - 1]);
						chl[cnt] = 588 * 6;
					}
					else//������ ���
						chl[cnt] += 16;
				}
				else if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 6;
				}
				else
				{
					chl[cnt] += 44032, cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 6;
				}
			}
			else if (chm[i + 1] == 65458)//��
			{
				if (chm[i - 1] > 65470 && chm[i - 1] <= 65491)
				{
					if (chm[i + 3] > 65470 && chm[i + 3] <= 65491)//�ʼ��� ���
					{
						chl[cnt] += 44032, cnt += 1;
						wprintf(L"%c", chl[cnt - 1]);
						chl[cnt] = 588 * 7;
					}
					else//������ ���
						chl[cnt] += 17;
				}
				else if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 7;
				}
				else
				{
					chl[cnt] += 44032, cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 7;
				}
			}
			else if (chm[i + 1] == 65461)//��
			{
				if (chm[i - 1] > 65470 && chm[i - 1] <= 65491)
				{
					if (chm[i + 3] > 65470 && chm[i + 3] <= 65491)//�ʼ��� ���
					{
						chl[cnt] += 44032, cnt += 1;
						wprintf(L"%c", chl[cnt - 1]);
						chl[cnt] = 588 * 9;
					}
					else//������ ���
						chl[cnt] += 19;
				}
				else if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 9;
				}
				else
				{
					chl[cnt] += 44032, cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 9;
				}
			}
			else if (chm[i + 1] == 65462)//��
			{
				if (chm[i - 1] > 65470 && chm[i - 1] <= 65491)
				{
					if (chm[i + 3] > 65470 && chm[i + 3] <= 65491)//�ʼ��� ���
					{
						chl[cnt] += 44032, cnt += 1;
						wprintf(L"%c", chl[cnt - 1]);
						chl[cnt] = 588 * 10;
					}
					else//������ ���
						chl[cnt] += 20;
				}
				else if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 10;
				}
				else
				{
					chl[cnt] += 44032, cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 10;
				}
			}
			else if (chm[i + 1] == 65463)//��
			{
				if (chm[i - 1] > 65470 && chm[i - 1] <= 65491)
				{
					if (chm[i + 3] > 65470 && chm[i + 3] <= 65491)//�ʼ��� ���
					{
						chl[cnt] += 44032, cnt += 1;
						wprintf(L"%c", chl[cnt - 1]);
						chl[cnt] = 588 * 11;
					}
					else//������ ���
						chl[cnt] += 21;
				}
				else if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 11;
				}
				else
				{
					chl[cnt] += 44032, cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 11;
				}
			}
			else if (chm[i + 1] == 65464)//��
			{
				if (chm[i - 1] > 65470 && chm[i - 1] <= 65491)
				{
					if (chm[i + 3] > 65470 && chm[i + 3] <= 65491)//�ʼ��� ���
					{
						chl[cnt] += 44032, cnt += 1;
						wprintf(L"%c", chl[cnt - 1]);
						chl[cnt] = 588 * 12;
					}
					else//������ ���
						chl[cnt] += 22;
				}
				else if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 12;
				}
				else
				{
					chl[cnt] += 44032, cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 12;
				}
			}
			else if (chm[i + 1] == 65466)//��
			{
				if (chm[i - 1] > 65470 && chm[i - 1] <= 65491)
				{
					if (chm[i + 3] > 65470 && chm[i + 3] <= 65491)//�ʼ��� ���
					{
						chl[cnt] += 44032, cnt += 1;
						wprintf(L"%c", chl[cnt - 1]);
						chl[cnt] = 588 * 14;
					}
					else//������ ���
						chl[cnt] += 23;
				}
				else if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 14;
				}
				else
				{
					chl[cnt] += 44032, cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 14;
				}
			}
			else if (chm[i + 1] == 65467)//��
			{
				if (chm[i - 1] > 65470 && chm[i - 1] <= 65491)
				{
					if (chm[i + 3] > 65470 && chm[i + 3] <= 65491)//�ʼ��� ���
					{
						chl[cnt] += 44032, cnt += 1;
						wprintf(L"%c", chl[cnt - 1]);
						chl[cnt] = 588 * 15;
					}
					else//������ ���
						chl[cnt] += 24;
				}
				else if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 15;
				}
				else
				{
					chl[cnt] += 44032, cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 15;
				}
			}
			else if (chm[i + 1] == 65468)//��
			{
				if (chm[i - 1] > 65470 && chm[i - 1] <= 65491)
				{
					if (chm[i + 3] > 65470 && chm[i + 3] <= 65491)//�ʼ��� ���
					{
						chl[cnt] += 44032, cnt += 1;
						wprintf(L"%c", chl[cnt - 1]);
						chl[cnt] = 588 * 16;
					}
					else//������ ���
						chl[cnt] += 25;
				}
				else if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 16;
				}
				else
				{
					chl[cnt] += 44032, cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 16;
				}
			}
			else if (chm[i + 1] == 65469)//��
			{
				if (chm[i - 1] > 65470 && chm[i - 1] <= 65491)
				{
					if (chm[i + 3] > 65470 && chm[i + 3] <= 65491)//�ʼ��� ���
					{
						chl[cnt] += 44032, cnt += 1;
						wprintf(L"%c", chl[cnt - 1]);
						chl[cnt] = 588 * 17;
					}
					else//������ ���
						chl[cnt] += 26;
				}
				else if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 17;
				}
				else
				{
					chl[cnt] += 44032, cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 17;
				}
			}
			else if (chm[i + 1] == 65470)//��
			{
				if (chm[i - 1] > 65470 && chm[i - 1] <= 65491)
				{
					if (chm[i + 3] > 65470 && chm[i + 3] <= 65491)//�ʼ��� ���
					{
						chl[cnt] += 44032, cnt += 1;
						wprintf(L"%c", chl[cnt - 1]);
						chl[cnt] = 588 * 18;
					}
					else//������ ���
						chl[cnt] += 27;
				}
				else if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 18;
				}
				else
				{
					chl[cnt] += 44032, cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 18;
				}
			}
			//�ߺ��� �ʼ�����
			else if (chm[i + 1] == 65459)//��
			{
				if (chl[cnt]>128)
					chl[cnt] += 44032;
				cnt += 1;
				wprintf(L"%c", chl[cnt - 1]);
				chl[cnt] = 588 * 8;
			}
			else if (chm[i + 1] == 65465)//��
			{
				if (chl[cnt]>128)
					chl[cnt] += 44032;
				cnt += 1;
				wprintf(L"%c", chl[cnt - 1]);
				chl[cnt] = 588 * 13;
			}
			else if (chm[i + 1] == 65448)//��
			{
				if (chl[cnt]>128)
					chl[cnt] += 44032;
				cnt += 1;
				wprintf(L"%c", chl[cnt - 1]);
				chl[cnt] = 588 * 4;
			}
			//�ʼ� �� �߼�����
			else if (chm[i + 1] == 65471)//��
				chl[cnt] += 28 * 0;
			else if (chm[i + 1] == 65472)//��
				chl[cnt] += 28 * 1;
			else if (chm[i + 1] == 65473)//��
				chl[cnt] += 28 * 2;
			else if (chm[i + 1] == 65474)//��
				chl[cnt] += 28 * 3;
			else if (chm[i + 1] == 65475)//��
				chl[cnt] += 28 * 4;
			else if (chm[i + 1] == 65476)//��
				chl[cnt] += 28 * 5;
			else if (chm[i + 1] == 65477)//��
				chl[cnt] += 28 * 6;
			else if (chm[i + 1] == 65478)//��
				chl[cnt] += 28 * 7;
			else if (chm[i + 1] == 65479)//��
				chl[cnt] += 28 * 8;
			else if (chm[i + 1] == 65480)//��
				chl[cnt] += 28 * 9;
			else if (chm[i + 1] == 65481)//��
				chl[cnt] += 28 * 10;
			else if (chm[i + 1] == 65482)//��
				chl[cnt] += 28 * 11;
			else if (chm[i + 1] == 65483)//��
				chl[cnt] += 28 * 12;
			else if (chm[i + 1] == 65484)//��
				chl[cnt] += 28 * 13;
			else if (chm[i + 1] == 65485)//��
				chl[cnt] += 28 * 14;
			else if (chm[i + 1] == 65486)//��
				chl[cnt] += 28 * 15;
			else if (chm[i + 1] == 65487)//��
				chl[cnt] += 28 * 16;
			else if (chm[i + 1] == 65488)//��
				chl[cnt] += 28 * 17;
			else if (chm[i + 1] == 65489)//��
				chl[cnt] += 28 * 18;
			else if (chm[i + 1] == 65490)//��
				chl[cnt] += 28 * 19;
			else if (chm[i + 1] == 65491)//��
				chl[cnt] += 28 * 20;
			//�߼� �� ���� ����
			else if (chm[i + 1] == 65443)//��
				chl[cnt] += 3;
			else if (chm[i + 1] == 65445)//��
				chl[cnt] += 5;
			else if (chm[i + 1] == 65446)//��
				chl[cnt] += 6;
			else if (chm[i + 1] == 65450)//��
				chl[cnt] += 9;
			else if (chm[i + 1] == 65451)//��
				chl[cnt] += 10;
			else if (chm[i + 1] == 65452)//��
				chl[cnt] += 11;
			else if (chm[i + 1] == 65453)//��
				chl[cnt] += 12;
			else if (chm[i + 1] == 65454)//��
				chl[cnt] += 13;
			else if (chm[i + 1] == 65455)//��
				chl[cnt] += 14;
			else if (chm[i + 1] == 65456)//��
				chl[cnt] += 15;
			else if (chm[i + 1] == 65460)//��
				chl[cnt] += 18;
			else if (chm[i] < 128)
			{
				if (chm[i - 1] < 128)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = chm[i];
					i--;
				}
				else
				{
					chl[cnt] += 44032;
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = chm[i];
					i--;
				}
			}
			//���� ��
		}
		else if (i < 2)
		{
			if (chm[i + 1] == 65441)//��
			{

				if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 0;
				}
				else
					chl[cnt] = 0;
			}
			else if (chm[i + 1] == 65442)//��
			{
				if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 1;
				}
				else
					chl[cnt] = 588;
			}
			else if (chm[i] == 65444 && chm[i + 1] == 65444)//��
			{
				if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 2;
				}
				else
					chl[cnt] = 588 * 2;
			}
			else if (chm[i + 1] == 65447)//��
			{
				if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 3;
				}
				else
					chl[cnt] = 588 * 3;
			}
			else if (chm[i + 1] == 65448)//��
				chl[cnt] = 588 * 4;
			else if (chm[i + 1] == 65449)//��
			{
				if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 5;
				}
				else
					chl[cnt] = 588 * 5;
			}
			else if (chm[i + 1] == 65457)//��
			{
				if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 6;
				}
				else
					chl[cnt] = 588 * 6;
			}
			else if (chm[i + 1] == 65458)//��
			{
				if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 7;
				}
				else
					chl[cnt] = 588 * 7;
			}
			else if (chm[i + 1] == 65459)//��
				chl[cnt] = 588 * 8;
			else if (chm[i + 1] == 65461)//��
			{
				if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 9;
				}
				else
					chl[cnt] = 588 * 9;
			}
			else if (chm[i + 1] == 65462)//��
			{
				if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 10;
				}
				else
					chl[cnt] = 588 * 10;
			}
			else if (chm[i + 1] == 65463)//��
			{
				if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 11;
				}
				else
					chl[cnt] = 588 * 11;
			}
			else if (chm[i + 1] == 65464)//��
			{
				if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 12;
				}
				else
					chl[cnt] = 588 * 12;
			}
			else if (chm[i + 1] == 65465)//��
				chl[cnt] = 588 * 13;
			else if (chm[i + 1] == 65466)//��
			{
				if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 14;
				}
				else
					chl[cnt] = 588 * 14;
			}
			else if (chm[i + 1] == 65467)//��
			{
				if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 15;
				}
				else
					chl[cnt] = 588 * 15;
			}
			else if (chm[i + 1] == 65468)//��
			{
				if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 16;
				}
				else
					chl[cnt] = 588 * 16;
			}
			else if (chm[i + 1] == 65469)//��
			{
				if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 17;
				}
				else
					chl[cnt] = 588 * 17;
			}
			else if (chm[i + 1] == 65470)//��
			{
				if (chm[i - 1] <= 127)
				{
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = 588 * 18;
				}
				else
					chl[cnt] = 588 * 18;
			}
			else
			{
				if (chm[i - 1] < 128 || i == 0)//ó���̰ų� �����ڰ� Ư�������ϰ��
				{
					if (i == 0)
						cnt += 1;
					chl[cnt] = chm[i];
					wprintf(L"%c", chl[cnt]);
					i--;
				}
				else//�����ڰ� �Ϲ� ������ ���
				{
					chl[cnt] += 44032;
					cnt += 1;
					wprintf(L"%c", chl[cnt - 1]);
					chl[cnt] = chm[i];
					i--;
				}
			}
		}
	}//����
	if (chm[i - 1] < 128)
		wprintf(L"%c\n", chl[cnt]);
	else if (chm[i - 2] > 128)
	{
		chl[cnt] += 44032;
		wprintf(L"%c\n", chl[cnt]);
	}
	getch();
}