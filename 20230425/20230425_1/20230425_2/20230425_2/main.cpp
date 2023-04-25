#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	if (num < 0)
	{
		num = -num;
	}
	printf("절대값은 %d 입니다.\n", num);
	return 0;
}