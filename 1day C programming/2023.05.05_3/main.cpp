#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score, x = 0;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &score);

	x = score / 10;

	switch (x)
	{
	case 10:
	case 9:
		printf(" ����� ������ A �Դϴ�.");
		break;
	case 8:
		printf(" ����� ������ B �Դϴ�.");
		break;
	case 7:
		printf(" ����� ������ C �Դϴ�.");
		break;
	case 6:
		printf(" ����� ������ D �Դϴ�.");
		break;
	default:
		printf(" ����� ������ F �Դϴ�.");
		break;
	}
	/////////////////// if�� ////////////////
	/*
	int score;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &score);

	if (score <= 100 && score >= 90)
	{
		printf("����� ������ A �Դϴ�.");
	}
	else if (score <= 89 && score >= 80)
	{
		printf("����� ������ B �Դϴ�.");
	}
	else if (score <= 79 && score >= 70)
	{
		printf("����� ������ C �Դϴ�.");
	}
	else if (score <= 69 && score >= 60)
	{
		printf("����� ������ D �Դϴ�.");
	}
	else 
	{
		printf("����� ������ F �Դϴ�.");
	}
	*/
}