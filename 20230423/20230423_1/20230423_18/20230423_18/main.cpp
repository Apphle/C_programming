#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long fact = 1;
	int i, n;

	printf("������ �Է��Ͻÿ�:\n ");
	scanf("%d", &n);

	i = 1;
	while (i <= n)
	{
		fact = fact * i;
		i++;
	}
	
	printf("%d!�� %d�Դϴ�.\n ", n, fact);

	return 0;
}