#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	int x;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &num);

	printf("%d�� ����� : ", num);

	for (x = 1; x <= num; x++)
	{
		if (num % x == 0)
		{
			printf("%d", x);
		}
	}
	printf("\n");
}