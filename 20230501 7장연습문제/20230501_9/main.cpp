#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, i, LCM;

	printf("���� 2���� �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);

	for (i = 1; i <= x; i++) 
	{
		for (i = 1; i <= y; i++)
		{
			if (x % i == 0 && y % i == 0)
			{
				LCM = (x * y) / i;
			}
		}
	}
	printf("�ּҰ������: %d �Դϴ�", LCM);
}