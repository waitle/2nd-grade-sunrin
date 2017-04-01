#include<stdio.h>

int main() {

	int input;
	int num[20][20] = { 0, };
	int i, j;
	int go = 1;


	printf("입력하세요\n");
	scanf_s("%d", &input);

	for (i = 0; i < input; i++) {
		for (j = 0; j < input; j++) {
			num[j][i] = go++;
		}
	}
	for (j = 0; j < input; j++) {
		if (j % 2 == 0) {
			for (i = 0; i < input; i++) {
				printf("%4d", num[i][j]);
			}
		}
		else if (j % 2 == 1) {
			for (i = input - 1; i >= 0; i--) {
				printf("%4d", num[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}