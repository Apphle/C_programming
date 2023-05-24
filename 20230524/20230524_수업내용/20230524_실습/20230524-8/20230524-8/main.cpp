//미래모빌리티공학과 202315015 이재혁
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_tax(int income)
{
	if (income > 1000)
		return income * 0.1;
	else
		return income * 0.08;
}

int main(void)
{
	int coin;

	printf("소득을 입력하시오(만원): ");
	scanf("%d", &coin);

	printf("소득세는 %d 만원입니다.", get_tax(coin));
}