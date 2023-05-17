#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer(void)
{
	int n;

	do
	{
		printf("양수를 입력하시오: ");
		scanf("%d", &n);
	} while (n <= 0);

	return n;
}

int is_prime(int n)
{
	int i;
	int j;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main(void)
{
	int n;
	n = get_integer();

	if (is_prime(n) == 1)
		printf("%d 는 소수입니다\n", n);
	else
		printf("%d 는 소수가 아닙니다\n", n);
	return 0;
}