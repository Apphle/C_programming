#define _CRT_SECURE_NO_WARNINGS
#define SEC_PER_MINUTE 60
#include<stdio.h>

int main(void)
{
	/*
	int x, y, result;
	printf("�ΰ��� ������ �Է��Ͻÿ�: ");
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
	/////////////////////////////////////////////////����//////////////////////////////////////////
	/*
	double x, y, result;
	printf("�ΰ��� ������ �Է��Ͻÿ�: ");
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
	////////////////////////////////////////////////�Ǽ�////////////////////////////////////////////
	int input, minute, second;

	printf("�ʸ� �Է��Ͻÿ�:");
	scanf("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;

	printf("%d�ʴ� %d�� %d���Դϴ�. \n", input, minute, second);

	return 0;
	///////////////////////////////////////////�� ����////////////////////////////////////////////
}
