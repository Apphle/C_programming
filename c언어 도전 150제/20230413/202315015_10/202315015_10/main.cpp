#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0;

	printf("당신의 점수를 입력 하시오:");
	scanf("%d", &num);

	if (num >= 90)
	{
		printf("당신의 학점은 바로 !!! A 입니다.");
	}
	else if (89 >= num && num > 80)
	{
		printf("당신의 학점은 바로 !!! B 입니다.");
	}
	else if (79 >= num && num > 70)
	{
		printf("당신의 학점은 바로 !!! C 입니다.");
	}
	else if (69 >= num && num > 60)
	{
		printf("당신의 학점은 바로 !!! D 입니다.");
	}
	else
	{
		printf("당신의 학점은 바로 !!! F 입니다.");
	}
}