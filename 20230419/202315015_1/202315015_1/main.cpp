//202315015/�̷������Ƽ���а�/������/20230419
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
		printf("������ ���� ����:");
		scanf("%d", &num);
		tries++;

		if (num > ans)
			printf("HIGH\n");

		if (num < ans)
			printf("LOW\n");
	} while (num != ans);

	printf("�̰� ����?.�õ� Ƚ�� = %d\n", tries);
	return 0;
}