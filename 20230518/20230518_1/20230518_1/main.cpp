#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, a[6];

	printf("6������ �Է��Ͻÿ�: \n");

	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int j = 0; j < 6; j++)
	{
		if (a[j] % 2 == 0)
		{
			printf("%d��  ¦���Դϴ�.\n", a[j]);
		}
		else
		{
			printf("%d��  Ȧ���Դϴ�.\n", a[j]);
		}
	}
	
	
	/*
	int n, a[5],sum = 0, max = 0;

	printf("5���� ������ �Է��Ͻÿ�: \n");

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
		printf("%d ���� �л��� ������ %d �Դϴ�.\n", j + 1, a[j]);
	}

	printf("�л����� ����� %d �Դϴ�.", sum / 5);
	printf("�ְ� ������ % d �Դϴ�.", max);
	*/

	/*
	int n, a[5];

	printf("5���� ������ �Է��Ͻÿ�: \n");

	for(int i = 0; i < 5; i++)
	{
		scanf("%d ", &a[i]);
	}
	for (int j = 0; j < 5; j++)
	{
		printf("%d ���� �л��� ������ %d �Դϴ�.\n", j + 1, a[j]);
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