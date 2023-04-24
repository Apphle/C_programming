#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	int x;

	printf("숫자를 입력하시오: ");
	scanf("%d", &num);

	printf("%d의 약수는 : ", num);

	for (x = 1; x <= num; x++)
	{
		if (num % x == 0)
		{
			printf("%d", x);
		}
	}
	printf("\n");
}