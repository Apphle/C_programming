#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0, x;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	for (x = 1; x <= num; x++)
	{
		if (num % x == 0)
		{
			printf("%d\n", x);
		}
	}
}