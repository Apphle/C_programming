#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0, i = 0, result = 0;

	printf("n을 값을 입력하시오: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		result += (i * i);
	}
	printf("%d", result);
}