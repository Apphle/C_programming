#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0;

	printf("������ �Է� �Ͻÿ�: ");
	scanf("%d", &num);

	switch (num/10)
	{
	case 10:
		printf("����� A ����Դϴ�.");
		break;
	case 9:
		printf("����� A ����Դϴ�.");
		break;
	case 8:
		printf("����� B ����Դϴ�.");
		break;
	case 7:
		printf("����� C ����Դϴ�.");
		break;
	case 6:
		printf("����� D ����Դϴ�.");
		break;
	default :
		printf("����� F ����Դϴ�.");
		break;
	}
	/*
	int num = 0;

	printf("������ �Է� �Ͻÿ�: ");
	scanf("%d", &num);

	if (100 >= num && num >= 90)
	{
		printf("����� A ����Դϴ�.");
	}
	else if (89 >= num && num >= 80)
	{
		printf("����� B ����Դϴ�.");
	}
	else if (79 >= num && num >= 70)
	{
		printf("����� C ����Դϴ�.");
	}
	else if (69 >= num && num >= 60)
	{
		printf("����� D ����Դϴ�.");
	}
	else
	{
		printf("�� F���, �� Ż��!!!");
	}
	*/
}