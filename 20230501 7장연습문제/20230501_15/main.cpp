#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, r, i, x = 1;

	printf("n�� ��:");
	scanf("%d", &n);

	printf("r�� ��:");
	scanf("%d", &r);

	for (i = n; i >= (n - r + 1); i--)
	{
		x *= i;
	}
	printf("������ ���� %d �Դϴ�.", x);
}