#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, i, LCM;

	printf("정수 2개를 입략하시오: ");
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
	printf("최소공배수는: %d 입니다", LCM);
}