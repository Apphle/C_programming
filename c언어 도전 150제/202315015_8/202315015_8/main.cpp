#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int drink = 500;
	int num = 0;

	printf("������ ������ �ݾ��� �����ÿ�:");
	scanf("%d", &num);

	if (num == drink)
	{
		printf("�����Ͻ� ������� ���Խ��ϴ�.\n\n");
	}
	else if (num < drink)
	{
		printf("������ �ݾ��� ����� ���ݺ��� ���� %d���� ��ȯ�Ǿ����ϴ�.\n\n", num);
	}
	else
	{

	}
}