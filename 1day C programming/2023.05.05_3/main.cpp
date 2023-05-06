#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score, x = 0;

	printf("성적을 입력하시오: ");
	scanf("%d", &score);

	x = score / 10;

	switch (x)
	{
	case 10:
	case 9:
		printf(" 당신의 성적은 A 입니다.");
		break;
	case 8:
		printf(" 당신의 성적은 B 입니다.");
		break;
	case 7:
		printf(" 당신의 성적은 C 입니다.");
		break;
	case 6:
		printf(" 당신의 성적은 D 입니다.");
		break;
	default:
		printf(" 당신의 성적은 F 입니다.");
		break;
	}
	/////////////////// if문 ////////////////
	/*
	int score;

	printf("성적을 입력하시오: ");
	scanf("%d", &score);

	if (score <= 100 && score >= 90)
	{
		printf("당신의 성적은 A 입니다.");
	}
	else if (score <= 89 && score >= 80)
	{
		printf("당신의 성적은 B 입니다.");
	}
	else if (score <= 79 && score >= 70)
	{
		printf("당신의 성적은 C 입니다.");
	}
	else if (score <= 69 && score >= 60)
	{
		printf("당신의 성적은 D 입니다.");
	}
	else 
	{
		printf("당신의 성적은 F 입니다.");
	}
	*/
}