#include<stdio.h>

int num(int a, int b, int c) {
	if (a == b) {
		return 0;
	}
	else if (c < b) {
		printf("*");
		num(a, b, c + 1);
	}
	else if (c == b) {
		printf("\n");
		num(a, b + 1, c = -1);
	}
}
int main() {
	int a, b, c;
	b = 0;
	c = -1;
	scanf("%d", &a);
	num(a, b, c);
	return 0;
}