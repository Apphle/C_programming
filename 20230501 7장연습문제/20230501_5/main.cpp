#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double num = 0, x = 0,i = 0,result = 1;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &num);

	printf("�ŵ� ���� Ƚ���� �Է��Ͻÿ�: ");
	scanf("%lf", &x);

	for (i = 1; i <= x; i++)
	{
		result *= num;
	}
	printf("%lf", result);
}