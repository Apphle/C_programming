#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int x, y, num;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	for (x = 1; x <= num; x++)
	{
		for (y = 1; y <= x; y++)
		{
			printf("%d ", y);
		}
		printf("\n");
	}
}