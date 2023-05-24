#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	else
		return 0;
}

int main(void)
{
	int c;

	printf("문자를 입력하시오: ");
	scanf("%c", &c);
	
	if (check_alpha(c))
		printf("%c 는(은) 알파벳 문자입니다.", c);
	else
		printf("%c 는(은) 알파벳이 아닙니다.", c);
}