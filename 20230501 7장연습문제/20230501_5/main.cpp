#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double num = 0, x = 0,i = 0,result = 1;

	printf("실수를 입력하시오: ");
	scanf("%lf", &num);

	printf("거듭 제곱 횟수를 입력하시오: ");
	scanf("%lf", &x);

	for (i = 1; i <= x; i++)
	{
		result *= num;
	}
	printf("%lf", result);
}