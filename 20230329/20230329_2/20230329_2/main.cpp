#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int money;
	int change;
	int price;
	int c1000, c500, c100, c50, c10;

	printf("���� ���� �Է��Ͻÿ�: ");
	scanf("%d", &price);

	printf("������ �ݾ��� �Է��Ͻÿ�: ");
	scanf("%d", &money);
	change = money - price;

	c1000 = change / 1000;
	change = change % 1000;

	c500 = change / 500;
	change = change % 500;

	c100 = change / 100;
	change = change % 100;

	c50 = change / 50;
	change = change % 50;

	c10 = change / 10;
	change = change % 10;

	printf("�Ž������� ������ �����ϴ�.\nõ����: %d��\n", c1000);
	printf("����� ����: %d��\n", c500);
	printf("��� ����: %d��\n", c100);
	printf("���ʿ� ����: %d��\n", c50);
	printf("�ʿ� ����: %d��\n", c10);

	return 0;


}