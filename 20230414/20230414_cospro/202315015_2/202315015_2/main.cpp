#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0;

	printf("점수를 입력 하시오: ");
	scanf("%d", &num);

	switch (num/10)
	{
	case 10:
		printf("당신은 A 등급입니다.");
		break;
	case 9:
		printf("당신은 A 등급입니다.");
		break;
	case 8:
		printf("당신은 B 등급입니다.");
		break;
	case 7:
		printf("당신은 C 등급입니다.");
		break;
	case 6:
		printf("당신은 D 등급입니다.");
		break;
	default :
		printf("당신은 F 등급입니다.");
		break;
	}
	/*
	int num = 0;

	printf("점수를 입력 하시오: ");
	scanf("%d", &num);

	if (100 >= num && num >= 90)
	{
		printf("당신은 A 등급입니다.");
	}
	else if (89 >= num && num >= 80)
	{
		printf("당신은 B 등급입니다.");
	}
	else if (79 >= num && num >= 70)
	{
		printf("당신은 C 등급입니다.");
	}
	else if (69 >= num && num >= 60)
	{
		printf("당신은 D 등급입니다.");
	}
	else
	{
		printf("너 F등급, 너 탈락!!!");
	}
	*/
}