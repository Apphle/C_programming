//�̷������Ƽ���а� 202315015 ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_tax(int income)
{
	if (income > 1000)
		return income * 0.1;
	else
		return income * 0.08;
}

int main(void)
{
	int coin;

	printf("�ҵ��� �Է��Ͻÿ�(����): ");
	scanf("%d", &coin);

	printf("�ҵ漼�� %d �����Դϴ�.", get_tax(coin));
}