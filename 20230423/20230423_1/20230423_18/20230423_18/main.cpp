#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long fact = 1;
	int i, n;

	printf("정수를 입력하시요:\n ");
	scanf("%d", &n);

	i = 1;
	while (i <= n)
	{
		fact = fact * i;
		i++;
	}
	
	printf("%d!은 %d입니다.\n ", n, fact);

	return 0;
}