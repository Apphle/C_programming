#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long fact = 1;
	int i, n;

	printf("������ �Է��Ͻÿ�:\n ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		fact = fact * i;

	printf("%d!�� %d�Դϴ�.\n ", n, fact);

	return 0;
}