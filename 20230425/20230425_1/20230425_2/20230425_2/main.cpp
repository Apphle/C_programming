#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	if (num < 0)
	{
		num = -num;
	}
	printf("���밪�� %d �Դϴ�.\n", num);
	return 0;
}