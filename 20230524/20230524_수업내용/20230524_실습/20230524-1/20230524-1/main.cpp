// 미래모빌리티공학과  202315015  이재혁
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int even(int n)
{
	if (n % 2 == 0)
		return 1;
	else
		return 0;
}

int absolute(int n)
{
	if (n < 0)
		return n * (-1);
	else
		return n;
}

int sign(int n)
{
	if (n < 0)
		return -1;
	else if (n == 0)
		return 0;
	else
		return 1;
}

int main(void)
{
	int a, n;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	printf("even 의 결과는 %d \n\n", even(n));
	
	printf("absolute 의 결과는 %d\n\n", absolute(n));

	printf("sign 의 결과는 %d \n\n", sign(n));
}