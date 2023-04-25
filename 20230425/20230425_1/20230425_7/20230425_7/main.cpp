#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch;

	printf("문자를 입력하시오:");
	ch = getchar();

	if (ch >= 'A' && ch <= 'Z')
	{
		printf("%c 는 대문자입니다.\n", ch);
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("%c 는 소문자입니다.\n", ch);
	}
	else if (ch >= '0' && ch <= '9')
	{
		printf("%c 는 숫자입니다.\n", ch);
	}
	else 
	{
		printf("%c 는 기타문자입니다.\n", ch);
	}
	return 0;
}