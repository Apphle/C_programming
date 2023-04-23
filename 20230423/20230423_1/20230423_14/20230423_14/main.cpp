#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int sum = 0;
	for (int i = 1; i <= 10; i++)
		sum += i;

		printf("1부터 10 까지의 정수의 합 = %d\n", sum);

	return 0;
}