#include <stdio.h>

int main(void)
{
	int i, sum = 0;

	for (i = 1; i <= 140; i++)
	{
		sum += i;

		if (sum > 10000)
		{
			break;
		}
	}
	printf("1���� 140 ������ ����: %d �Դϴ�.", sum);
}