#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char e = 0;

	printf("영문자 를 입력하시오: ");
	scanf("%c", &e);

	if (e >= 'A' && e <= 'Z')
	{
		printf("%c는 대문자 입니다.", e);
	}
	else if (e >= 'a' && e <= 'z')
	{
		printf("%c는 소문자 입니다.", e);
	}
	else
	{
		printf("%c는 영문자가 아닙니다.", e);
	}
}