#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, a[6];

	printf("6개수를 입력하시오: \n");

	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int j = 0; j < 6; j++)
	{
		if (a[j] % 2 == 0)
		{
			printf("%d는  짝수입니다.\n", a[j]);
		}
		else
		{
			printf("%d는  홀수입니다.\n", a[j]);
		}
	}
	
	
	/*
	int n, a[5],sum = 0, max = 0;

	printf("5개의 점수를 입력하시오: \n");

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];

		if (max < a[i])
		{
			max = a[i];
		}
	}
	
	for (int j = 0; j < 5; j++)
	{
		printf("%d 번쨰 학생의 점수는 %d 입니다.\n", j + 1, a[j]);
	}

	printf("학생들의 평균은 %d 입니다.", sum / 5);
	printf("최고 점수는 % d 입니다.", max);
	*/

	/*
	int n, a[5];

	printf("5개의 점수를 입력하시오: \n");

	for(int i = 0; i < 5; i++)
	{
		scanf("%d ", &a[i]);
	}
	for (int j = 0; j < 5; j++)
	{
		printf("%d 번쨰 학생의 점수는 %d 입니다.\n", j + 1, a[j]);
	}
	*/
	

	/*
	int a[5] = {1,2,3,4,5};

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", a[i]);
	}
	*/
	
}