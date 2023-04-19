//202315015/미래모빌리티공학과/이재혁/20230419
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	int num = 0;
	int ans = rand() % 100 + 1;
	int tries = 0;
	
	srand((unsigned)time(NULL));

	do 
	{
		printf("정답을 맞춰 보셈:");
		scanf("%d", &num);
		tries++;

		if (num > ans)
			printf("HIGH\n");

		if (num < ans)
			printf("LOW\n");
	} while (num != ans);

	printf("이걸 마춰?.시도 횟수 = %d\n", tries);
	return 0;
}