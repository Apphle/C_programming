#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0;

	printf("���� �Է� �Ͻÿ�:");
	scanf("%d", &num);

	if (num < 0)
	{
		printf(" �Է��Ͻ� �� �� ���밪�� %d �Դϴ�.", -num);
	}
	else
	{
		printf("�Է��Ͻ� �� �� ���밪��  %d �Դϴ�.", num);
	}
}