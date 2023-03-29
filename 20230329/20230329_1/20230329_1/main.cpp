#define _CRT_SECURE_NO_WARNINGS
#define SEC_PER_MINUTE 60
#include<stdio.h>

int main(void)
{
	/*
	int x, y, result;
	printf("두개의 정수를 입력하시오: ");
	scanf("%d %d", &x, &y);

	result = x + y;
	printf("%d + %d = %d\n", x, y, result);

	result = x - y;
	printf("%d - %d = %d\n", x, y, result);

	result = x * y;
	printf("%d * %d = %d\n", x, y, result);

	result = x / y;
	printf("%d / %d = %d\n", x, y, result);

	result = x % y;
	printf("%d %% %d = %d\n", x, y, result);

	return 0;
	*/
	/////////////////////////////////////////////////정수//////////////////////////////////////////
	/*
	double x, y, result;
	printf("두개의 정수를 입력하시오: ");
	scanf("%lf %lf", &x, &y);

	result = x + y;
	printf("%f + %f = %f\n", x, y, result);

	result = x - y;
	printf("%f - %f = %f\n", x, y, result);

	result = x * y;
	printf("%f * %f = %f\n", x, y, result);

	result = x / y;
	printf("%f / %f = %f\n", x, y, result);

	result = x % y;
	printf("%f %% %f = %f\n", x, y, result);

	return 0;
	*/
	////////////////////////////////////////////////실수////////////////////////////////////////////
	int input, minute, second;

	printf("초를 입력하시오:");
	scanf("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;

	printf("%d초는 %d분 %d초입니다. \n", input, minute, second);

	return 0;
	///////////////////////////////////////////초 계산기////////////////////////////////////////////
}
