#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int age = 20;
	int age_num = 0;

	printf("���̸� �Է� �Ͻÿ�: ");
	scanf("%d", &age_num);

		if (age > age_num)
		{
			printf("30 percent ���� ��� �Դϴ�.");
		}
		else
		{
			printf("���� ����� �ƴմϴ�.");
		}

	return 0;
}