#include <stdio.h>

int main(void)
{
	int num,sum = 0;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
		{
			sum += num;
		}
	}
	printf("1���� 100 ������ 3�� ����� ��: %d", sum);
}