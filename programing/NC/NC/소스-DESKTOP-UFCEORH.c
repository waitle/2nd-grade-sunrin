#include <stdio.h>

#include <stdlib.h>

#include <time.h>

void publishProgress(int a)
{
	a += 1;
}

void main(void)

{

	clock_t start, finish;

	double duration;

	start = clock();

	for (int i = 0; i < 10000; i++) {
		publishProgress(i);
	}

	finish = clock();

	duration = (double)(finish - start) / CLOCKS_PER_SEC;

	printf("%lf 초 걸렸습니다. \n", duration);


	start = clock();

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				for (int l = 0; l < 10; l++) {
					publishProgress(l);
				}
			}
		}
	}

	finish = clock();

	duration = (double)(finish - start) / CLOCKS_PER_SEC;

	printf("%lf 초 걸렸습니다. \n", duration);



	// 수행 시간 측정 종료

}