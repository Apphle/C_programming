#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0;

	printf("수를 입력 하시오:");
	scanf("%d", &num);

	if (num < 0)
	{
		printf(" 입력하신 수 의 절대값은 %d 입니다.", -num);
	}
	else
	{
		printf("입력하신 수 의 절대값은  %d 입니다.", num);
	}
}