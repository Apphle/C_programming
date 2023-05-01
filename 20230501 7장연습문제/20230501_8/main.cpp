#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int x, y, num;

	printf("정수를 입력하시오: ");
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