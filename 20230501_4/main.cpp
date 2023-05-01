#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0, x;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	for (x = 1; x <= num; x++)
	{
		if (num % x == 0)
		{
			printf("%d\n", x);
		}
	}
}