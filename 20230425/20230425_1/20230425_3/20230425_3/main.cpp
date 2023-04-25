#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;

	printf("정수를 입력하시오:");
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("입력된 정수는 짝수입니다.");

	}
	else
	{
		printf("입력된 정수는 홀수입니다.");
	}
	return 0;
}