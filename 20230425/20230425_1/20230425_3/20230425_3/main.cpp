#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("�Էµ� ������ ¦���Դϴ�.");

	}
	else
	{
		printf("�Էµ� ������ Ȧ���Դϴ�.");
	}
	return 0;
}