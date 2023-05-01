#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, x, sum = 0;

	printf("정수 3개를 입력하시오:");
	scanf("%d", &num);

	for(x = 0;)
	{
		

		if (num < 0)
		{
			printf("다시 입력하시오(음수 제외):");
			continue;
		}

		sum = x + y + z;
	}
	printf("%d",sum);
}