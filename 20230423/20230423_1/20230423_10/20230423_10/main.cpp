#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number, sum = 0;

	do
	{
		printf("������ �Է��Ͻÿ�: \n");
		scanf("%d", &number);
		sum += number;
	} while (number != 0);

	printf("���ڵ��� �� = %d \n", sum);

	return 0;
}