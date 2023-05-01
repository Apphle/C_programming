#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, r, i, x = 1;

	printf("n의 값:");
	scanf("%d", &n);

	printf("r의 값:");
	scanf("%d", &r);

	for (i = n; i >= (n - r + 1); i--)
	{
		x *= i;
	}
	printf("순열의 값은 %d 입니다.", x);
}