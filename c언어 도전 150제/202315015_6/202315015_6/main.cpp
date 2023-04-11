#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int age = 20;
	int age_num = 0;

	printf("나이를 입력 하시오: ");
	scanf("%d", &age_num);

		if (age > age_num)
		{
			printf("30 percent 할인 대상 입니다.");
		}
		else
		{
			printf("할인 대상이 아닙니다.");
		}

	return 0;
}